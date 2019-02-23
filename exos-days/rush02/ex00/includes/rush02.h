/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 15:30:42 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/25 22:57:27 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include "init.h"
# define BUF_SIZE 4098

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
	int				size;
}					t_list;

t_list				*ft_create_elem(void *data);
void				ft_list_push_back(t_list **begin_list, void *data, int ret);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				rush(int x, int y);
void				ft_putnbr(int nb);
int					ft_atoi(char *str);
int					ft_strlen(char *str);
int					ft_nb_x(char *str);
int					ft_nb_y(char *str);
int					ft_strcmp(char *s1, char *s2);
int					check_colle(t_check *rush, char *str, int x, int y);
int					ft_strncmp(char *s1, char *s2, unsigned int n);
char				*ft_strcat(char *dest, char *src);
char				*ft_strdup(char *src);

#endif
