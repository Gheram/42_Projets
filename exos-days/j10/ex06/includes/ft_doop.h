/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do-op.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 18:54:47 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/19 18:04:15 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOP_H
# define FT_DOOP_H
# include <unistd.h>

typedef struct	s_opp
{
	char		*opp;
	void		(*f)(int, int);
}				t_opp;

void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
void			ft_add(int valeur1, int valeur2);
void			ft_sub(int valeur1, int valeur2);
void			ft_mul(int valeur1, int valeur2);
void			ft_div(int valeur1, int valeur2);
void			ft_mod(int valeur1, int valeur2);
void			ft_usage(int a, int b);
int				ft_strcmp(char *s1, char *s2);
int				ft_atoi(char *str);

#endif
