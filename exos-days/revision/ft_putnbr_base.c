/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 21:41:49 by nihuynh           #+#    #+#             */
/*   Updated: 2018/02/22 11:01:30 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ASCII (*base >= 0 && *base <= 127)
#define SIGNE (*base != 43 && *base != 45)

void			ft_putchar(char a);

unsigned int	ft_strlen(char *str)
{
	unsigned int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int				ft_is_alone(char c, char *str)
{
	int counter;

	counter = 0;
	while (*str && counter != 2)
	{
		if (c == *str)
			counter++;
		str++;
	}
	if (counter == 1 && !*str)
		return (1);
	return (0);
}

int				ft_error_base(char *base)
{
	while (*base)
	{
		if (!(ASCII && SIGNE))
			return (1);
		if (!ft_is_alone(*base, base))
			return (1);
		base++;
	}
	return (0);
}

void			ft_putnbr_base(int nbr, char *base)
{
	unsigned int carrier;

	if (ft_strlen(base) <= 1 || ft_error_base(base))
		return ;
	if (nbr < 0)
	{
		carrier = -nbr;
		ft_putchar('-');
	}
	else
		carrier = nbr;
	if (carrier >= ft_strlen(base))
		ft_putnbr_base(carrier / ft_strlen(base), base);
	ft_putchar(base[carrier % ft_strlen(base)]);
}
