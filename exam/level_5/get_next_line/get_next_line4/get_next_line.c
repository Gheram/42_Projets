/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 11:34:27 by ghtouman          #+#    #+#             */
/*   Updated: 2019/02/18 20:13:59 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

void	ft_strdel(char **as)
{
	if (as && *as)
	{
		free(*as);
		*as = NULL;
	}
}

char	*ft_strdup(const char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i])
		i++;
	if (!(dest = (char*)malloc(sizeof(*dest) * (i + 1))))
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *res;

	res = (unsigned char*)s;
	while (n--)
		*res++ = (unsigned char)c;
	return (s);
}

char	*ft_strnew(size_t size)
{
	char *alloc_str;

	if (!(alloc_str = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_memset(alloc_str, 0, size);
	alloc_str[size] = '\0';
	return (alloc_str);
}


size_t		ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	if (str)
	{
		while (str[i])
			i++;
	}
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}

void	*ft_memalloc(size_t size)
{
	void *alloc;

	if (size > 4294967295)
		return (NULL);
	if (!(alloc = malloc(sizeof(*alloc) * (size + 1))))
		return (NULL);
	ft_memset(alloc, 0, size);
	return (alloc);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len_concat;
	char	*concat;
	int		i;
	int		j;

	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	len_concat = ft_strlen(s1) + ft_strlen(s2);
	if (!(concat = (char*)malloc(sizeof(*concat) * (len_concat + 1))))
		return (NULL);
	i = -1;
	j = 0;
	while (s1[++i])
		concat[i] = s1[i];
	while (s2[j])
		concat[i++] = s2[j++];
	concat[i] = '\0';
	return (concat);
}

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*section;
	size_t	i;

	if (!s)
		return (NULL);
	if (!(section = (char*)malloc(sizeof(*section) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len)
		section[i++] = (char)s[start++];
	section[i] = '\0';
	return (section);
}

int		find_new_line(int fd, char **data, char **line)
{
	char	*tmp;
	int		i;

	i = 0;
	while (data[fd][i] != '\n' && data[fd][i] != '\0')
		i++;
	if (data[fd][i] == '\n')
	{
		*line = ft_strsub(data[fd], 0, i);
		tmp = ft_strdup(data[fd] + i + 1);
		ft_strdel(&data[fd]);
		data[fd] = tmp;
		if (data[fd][0] == '\0')
			ft_strdel(&data[fd]);
	}
	else if (data[fd][i] == '\0')
	{
		*line = ft_strdup(data[fd]);
		ft_strdel(&data[fd]);
	}
	return (1);
}

int		get_next_line(char **line)
{
	int			nb_bytes_read_from_buf;
	char		buf[BUFF_SIZE + 1];
	char		*tmp;
	const int fd = 0;
	static char	*data[1024];

	if (fd < 0 || line == NULL)
		return (-1);
	while ((nb_bytes_read_from_buf = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[nb_bytes_read_from_buf] = '\0';
		if (data[fd] == NULL)
			data[fd] = ft_strnew(0);
		tmp = ft_strjoin(data[fd], buf);
		ft_strdel(&data[fd]);
		data[fd] = tmp;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (nb_bytes_read_from_buf < 0)
		return (-1);
	else if (nb_bytes_read_from_buf == 0 && data[fd] == NULL)
		return (0);
	return (find_new_line(fd, data, line));
}
