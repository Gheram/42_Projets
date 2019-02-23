/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evalexp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 11:30:34 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/25 13:39:27 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "evalexp.h"

int	execute_operation(int valeur1, int valeur2, char operation)
{
	if (operation == '+')
		return (valeur1 + valeur2);
	else if (operation == '-')
		return (valeur1 - valeur2);
	else if (operation == '*')
		return (valeur1 * valeur2);
	else if (operation == '/')
		return (valeur1 / valeur2);
	else if (operation == '%')
		return (valeur1 % valeur2);
	else
		return (0);
}

int	ft_atoi(char *str, int *i)
{
	int resultat;
	int signe;

	resultat = 0;
	signe = 1;
	if (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			signe = -1;
		*i += 1;
	}
	if (str[*i] == '(')
	{
		*i += 1;
		resultat = ft_all(str, i);
		*i += 1;
		return (signe * resultat);
	}
	while ('0' <= str[*i] && str[*i] <= '9')
		resultat = (resultat * 10) + str[(*i)++] - '0';
	return (signe * resultat);
}

int	ft_mul_div(char *str, int *i)
{
	int		valeur1;
	int		valeur2;
	char	operation;

	valeur1 = ft_atoi(str, i);
	while (str[*i] == '*' || str[*i] == '/' || str[*i] == '%')
	{
		operation = str[(*i)++];
		valeur2 = ft_atoi(str, i);
		valeur1 = execute_operation(valeur1, valeur2, operation);
	}
	return (valeur1);
}

int	ft_all(char *str, int *i)
{
	int		valeur1;
	int		valeur2;
	char	operation;

	valeur1 = ft_atoi(str, i);
	while (str[*i] != '\0' && str[*i] != ')')
	{
		operation = str[(*i)++];
		if (operation == '+' || operation == '-')
			valeur2 = ft_mul_div(str, i);
		else
			valeur2 = ft_atoi(str, i);
		valeur1 = execute_operation(valeur1, valeur2, operation);
	}
	return (valeur1);
}

int	eval_expr(char *expr)
{
	int	i;
	char*str;

	i = 0;
	str = delete_spaces(expr);
	if (!str[0])
		return (0);
	return (ft_all(str, &i));
}
