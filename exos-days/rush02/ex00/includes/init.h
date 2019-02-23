/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 19:29:54 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/25 22:58:01 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INIT_H
# define INIT_H

typedef struct		s_check
{
	char			debut[3];
	char			milieu[3];
	char			fin[3];
}					t_check;

t_check				*rush_00(void);
t_check				*rush_01(void);
t_check				*rush_02(void);
t_check				*rush_03(void);
t_check				*rush_04(void);
int					check(t_check *rush, char *str, int x, int y);
int					check_debut(t_check *rush, char *str, int x, int y);
int					check_milieu(t_check *rush, char *str, int x, int y);
int					check_fin(t_check *rush, char *str, int x, int y);

#endif
