/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 19:37:08 by ghtouman          #+#    #+#             */
/*   Updated: 2019/02/18 20:09:16 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdio.h>
#define BUFF_SIZE 32

size_t          ft_strlen(const char *str);
char            *ft_strjoin(const char *s1, const char *s2);
char            *ft_strdup(const char *src);
int             get_next_line(char **line);
char	       *ft_strchr(const char *s, int c);
