/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 10:05:13 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/16 10:16:01 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base <= 0)
		return (0);
	if (base == 1)
		return (1);
	if (base % 2 == 0)
		return (ft_collatz_conjecture(base / 2) + 1);
	if (base % 2 == 1)
		return (ft_collatz_conjecture((base * 3) + 1) + 1);
	return (0);
}
