/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 09:31:13 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/18 12:59:37 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nmatch(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s2 == '\0')
		return (0);
	else if ((*s2 == '*') && (*s1 != '\0'))
		return (nmatch((s1 + 1), s2) + nmatch((s1), (s2 + 1)));
	else if (*s1 == *s2)
	{
		s1++;
		s2++;
		return (nmatch(s1, s2));
	}
	else if (*s2 == '\0')
		return (0);
	else if (*s1 == '\0' && *s2 == '*')
		return (nmatch(s1, (s2 + 1)));
	else if (*s1 != *s2)
		return (0);
	return (1);
}
