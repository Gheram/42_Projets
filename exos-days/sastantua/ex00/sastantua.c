/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 10:23:14 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/11 09:26:13 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	cut(int *milieux, int *nb_pipe, int *hauteur_porte, int tab[4])
{
	*milieux = 1 + tab[3] / 2;
	if (tab[0] % 2 == 0)
	{
		*nb_pipe = tab[0] - 1;
		*hauteur_porte = tab[0] - 1;
	}
	else
	{
		*nb_pipe = tab[0];
		*hauteur_porte = tab[0];
	}
}

void	porte_et_ligne(int i, int j, int tab[4])
{
	int milieux;
	int nb_pipe;
	int hauteur_porte;

	cut(&milieux, &nb_pipe, &hauteur_porte, tab);
	while (j < tab[3])
	{
		if ((i >= tab[1] - hauteur_porte) && tab[2] + 1 == tab[0]
			&& nb_pipe > 0 && j > milieux + tab[0] / 2 - i + 1)
		{
			if (nb_pipe == 2 && tab[0] > 4
				&& i == tab[1] - hauteur_porte + hauteur_porte / 2)
				ft_putchar('$');
			else
				ft_putchar('|');
			nb_pipe--;
		}
		else
			ft_putchar('*');
		j++;
	}
}

void	etage(int tab[4], int decallage)
{
	int i;
	int j;

	i = -1;
	while (++i < tab[1])
	{
		j = -decallage;
		while (j < tab[1] - 1 - i)
		{
			ft_putchar(' ');
			j++;
		}
		j += tab[1] + 1 - i;
		ft_putchar('/');
		porte_et_ligne(i, j, tab);
		ft_putchar('\\');
		ft_putchar('\n');
	}
}

int		largeur_etage_i(int i)
{
	if (i == 0)
		return (7);
	return (largeur_etage_i(i - 1) + 2 * (1 + (3 + i) + ((i % 2) + (i / 2))));
}

void	sastantua(int size)
{
	int decallage;
	int tab[4];

	tab[0] = size;
	tab[2] = -1;
	while (++tab[2] < size)
	{
		decallage = (largeur_etage_i(size - 1) - largeur_etage_i(tab[2])) / 2;
		tab[1] = 3 + tab[2];
		tab[3] = largeur_etage_i(tab[2]);
		etage(tab, decallage);
	}
}
