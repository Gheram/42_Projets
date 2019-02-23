/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revsion.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 09:17:46 by ghtouman          #+#    #+#             */
/*   Updated: 2019/02/19 09:39:41 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	biggest_pal(char *str)
{
    int     len;
    char    *end;
    char    *save;
    char    *tmp_end;
    char    *tmp_begin;
    char    *save_begin;

    len = 0;
    begin = str;
    end = str;
    while (*end)
        end++;
    end--;
    while (end > (str + len))
    {
        while (begin < end)
        {
            if (*begin == *end)
            {
                tmp_end = end;
                tmp_begin = begin;
                while (*begin == *end && begin <= end)
                {
                    begin++;
                    end--;
                }
                if (*begin == *end)
                {
                    if ((tmp_end - tmp_begin) > len)
                    {
                        len = (tmp_end - tmp_begin);
                        save_begin = begin;
                    }
                }
                end = tmp_end;
                begin =  tmp_begin;
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
        write (1, str, 1);
    else
        write(1, save_begin, len + 1);
}


int     main(int argc, char **argv)
{
    if (argc == 2)
        biggest_pal(argv[1]);
    write(1, "\n", 1);
    returm (0);
}
