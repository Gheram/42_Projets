/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 17:40:24 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/11 16:10:40 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	ft_strlowcase(str);
	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		j = i - 1;
		while (str[i] >= 97 && str[i] <= 122 && ((str[j] >= 0 && str[j] <= 47)
		|| (str[j] >= 58 && str[j] <= 64) || (str[j] >= 91 && str[j] <= 96)
		|| (str[j] <= 123 && str[j] >= 127)))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
