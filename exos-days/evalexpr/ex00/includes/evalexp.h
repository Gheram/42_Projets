/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evalexp.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 10:33:43 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/25 19:05:16 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVALEXP_H
# define EVALEXP_H
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		execute_operation(int valeur1, int valeur2, char operation);
int		ft_atoi(char *str, int *i);
int		ft_mul_div(char *str, int *i);
int		ft_all(char *str, int *i);
int		eval_expr(char *expr);
char	*delete_spaces(char *str);

#endif
