/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 14:53:20 by nihuynh           #+#    #+#             */
/*   Updated: 2018/02/23 11:06:56 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ASCII (*base >= 1 && *base <= 127)
#define SIGNE(car) (car == 43 || car == 45)

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int		ft_is_alone(char c, char *str)
{
	int counter;

	counter = 0;
	while (*str && counter != 2)
	{
		if (c == *str)
			counter++;
		str++;
	}
	return (counter == 1) ? 1 : 0;
}

int		ft_error(char *base)
{
	while (*base)
	{
		if (!ASCII || !ft_is_alone(*base, base) || SIGNE(*base))
			return (1);
		base++;
	}
	return (0);
}

int		ft_indxbase(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int res;
	int neg;

	res = 0;
	if (ft_strlen(base) <= 1 || !*str || ft_error(base))
		return (0);
	while (res < ft_strlen(str))
	{
		if (!SIGNE(str[res]) && ft_indxbase(str[res], base) == -1)
			return (0);
		res++;
	}
	res = 0;
	while (*str == 32 || (*str <= 13 && *str >= 9))
		str++;
	neg = (*str == 45) ? -1 : 1;
	if (SIGNE(*str))
		str++;
	while (ft_indxbase(*str, base) != -1 && *str)
	{
		res = res * ft_strlen(base) + ft_indxbase(*str, base);
		str++;
	}
	return (res * neg);
}
