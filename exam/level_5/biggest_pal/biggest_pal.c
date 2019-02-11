/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest_pal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 10:33:01 by ghtouman          #+#    #+#             */
/*   Updated: 2019/02/11 11:13:45 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	biggest_pal(char *str)
{
	int len;
	char *end;
	char *begin;
	char *tmp_begin;
	char *tmp_end;
	char *save_begin;
	char *save_end;

	len = 0;
	begin = str;
	end = str;
	while (*end)
		end++;
	end--;
	while(end >= (str + len))
	{
		while (begin < end)
		{
			if (*begin == *end)
			{
				tmp_begin = begin;
				tmp_end = end;
				while (*begin == *end && begin <= end)
				{
					end--;
					begin++;
				}
				if (*begin == *end)
				{
					if ((tmp_end - tmp_begin) > len)
					{
						len = (tmp_end - tmp_begin);
						save_begin = tmp_begin;
						save_end = tmp_end;
					}
				}
				end = tmp_end;
				begin = tmp_begin;
			}
			begin++;
		}
		begin = str;
		end--;
	}
	while (*str)
		str++;
	str--;
	if (len == 0)
		write(1, str, 1);
	else
		write(1, save_begin, len + 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
		biggest_pal(av[1]);
	write(1, "\n", 1);
}
