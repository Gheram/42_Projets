/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 11:09:12 by ghtouman          #+#    #+#             */
/*   Updated: 2018/05/02 15:50:51 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	afficherListe(t_stock *ma_list)
{
    t_stock *element;
	int i;

	i = 0;
	element = ma_list;
    while (element)
    {
	 	printf("%s", element->content);
        element = element->next;
    }
}

void ft_control(t_stock ma_list, t_struct ma_struct)
{
	if (check_error(&ma_list) == FALSE)
		return ;
	ma_struct.base_grid = ft_sqrt(ma_struct.grid_size * 4);
	tab_map(&ma_struct);
}

void	ft_read(const char *name)
{
	int			ret;
	int			fd;
	char		*buf;
	t_stock 	*ma_list;
	t_struct	ma_struct;

	fd = open(name, O_RDONLY);
	ma_list = NULL;
	ma_struct.grid_size = 0;
	buf = ft_strnew(21);
	if (fd != -1)
	{
		while ((ret = read(fd, buf, 21)))
		{
			buf[ret] = '\0';
			ft_lstpush_back(&ma_list, ft_strdup(buf));
			ma_struct.grid_size++;
		}
	}
	close(fd);
	ft_control(*ma_list, ma_struct);
}

int		main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		ft_putstr("Un fichier a la fois");
	}
	else
	{
		ft_read(argv[1]);
	}
	return (0);
}
