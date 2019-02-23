/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 12:14:49 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/16 12:23:04 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# include <string.h>
# define SAVE_THE_WORLD "SAVE_THE_WORLD"

typedef struct s_perso	t_perso;

struct					s_perso
{
	char	*name;
	float	life;
	int		age;
	char	*profession;
};

#endif
