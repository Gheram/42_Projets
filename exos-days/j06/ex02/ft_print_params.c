/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 18:43:26 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/11 12:30:03 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int i;

	(void)argc;
	i = 0;
	while (argv[++i])
		ft_putstr(argv[i]);
	return (0);
}
