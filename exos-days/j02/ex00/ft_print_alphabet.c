/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 11:17:34 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/06 11:22:06 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		ft_putchar(alphabet);
		alphabet++;
	}
}
