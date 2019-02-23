/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 19:05:42 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/11 12:36:23 by ghtouman         ###   ########.fr       */
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
	i = 1;
	while (argv[i])
		i++;
	while (argv[--i])
	{
		if (i == 0)
			break ;
		ft_putstr(argv[i]);
	}
	return (0);
}
