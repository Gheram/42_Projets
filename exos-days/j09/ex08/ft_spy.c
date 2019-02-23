/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 10:16:49 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/16 12:04:14 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = -1;
	while (str[++i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
	}
	return (str);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] && (s1[i] == ' ' || s1[i] == s2[i]))
		i++;
	if (i >= n)
		return (0);
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		while (*argv[i] == ' ' || *argv[i] == '\t' || *argv[i] == '\n')
			argv[i]++;
		ft_strlowcase(argv[i]);
		if (!ft_strncmp(argv[i], "president", 9)
			|| !ft_strncmp(argv[i], "attack", 6)
			|| !ft_strncmp(argv[i], "bauer", 5))
		{
			i++;
			ft_putstr("Alert!!!\n");
			return (0);
		}
		i++;
	}
	return (0);
}
