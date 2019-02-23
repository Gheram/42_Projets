/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 11:16:20 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/28 23:23:32 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# define BUF_SIZE 4098

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
	int				size;
}					t_list;

t_list				*ft_create_elem(void *data);
void				ft_list_push_back(t_list **begin_list, void *data, int ret);
void				ft_putstr(char *str);
void				ft_putchar(char c);
char				*ft_read(void);
char				*ft_strcat(char *dest, char *src);
char				*ft_strdup(char *src);
char				*init_malloc(t_list *ma_list);
char				*ft_parse_change(char *str);
char				*ft_with_cube(char *str);
int					ft_strlen(char *str);
int					ft_nb_x(char *str);
int					ft_nb_y(char *str);
int					ft_atoi(char *str);
int					**ft_grid_intsert(char *str);
void				ft_found_max(int **tab, int x, int y, char *str);
void				move_map(int position[3], char *str, int x, int *toby);
void				matrixalgo(int **tab, int x, int y, char *str);
void				check_error(char *str);
void				print_error();

#endif
