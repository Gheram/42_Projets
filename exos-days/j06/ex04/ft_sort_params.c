/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 19:15:13 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/12 16:29:34 by ghtouman         ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*transfere;

	i = 0;
	while (++i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				transfere = argv[i];
				argv[i] = argv[j];
				argv[j] = transfere;
			}
			j++;
		}
	}
	i = 1;
	while (i < argc)
		ft_putstr(argv[i++]);
	return (0);
}
