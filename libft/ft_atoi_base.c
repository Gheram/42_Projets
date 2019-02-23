/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 19:15:24 by ghtouman          #+#    #+#             */
/*   Updated: 2019/01/14 19:27:14 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi_base(const char *nbr, unsigned int base)
{
	int		i;
	int		result;
	int		neg;

	i = 0;
	neg = 1;
	result = 0;
	while (nbr[i] <= 32 && nbr[i])
		i++;
	if (nbr[i] == '-')
		neg = -1;
	if (nbr[i] == '+' || nbr[i] == '-')
		i++;
	while ((nbr[i] && nbr[i] >= '0' && nbr[i] <= '9')
			|| (nbr[i] >= 65 && nbr[i] <= 70)
			|| (nbr[i] >= 97 && nbr[i] <= 102))
	{
		if (nbr[i] >= '0' && nbr[i] <= '9')
			result = (result * base) + (int)(nbr[i] - '0');
		if (nbr[i] >= 65 && nbr[i] <= 70)
			result = (result * base) + (int)(nbr[i] - 55);
		if (nbr[i] >= 97 && nbr[i] <= 102)
			result = (result * base) + (int)(nbr[i] - 87);
		i++;
	}
	return (result * neg);
}
