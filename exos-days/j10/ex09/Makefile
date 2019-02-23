# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/17 18:59:15 by ghtouman          #+#    #+#              #
#    Updated: 2018/02/19 10:10:12 by ghtouman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

IDIR = ./includes/
PATH_SRC = ./srcs/
NAME = ft_advanced_do-op

SRC  = $(PATH_SRC)main.c $(PATH_SRC)ft_atoi.c $(PATH_SRC)ft_strcmp.c \
	   $(PATH_SRC)ft_putnbr.c $(PATH_SRC)ft_putchar.c $(PATH_SRC)ft_putstr.c \
	   $(PATH_SRC)operation.c

all:
	@gcc -Wall -Werror -Wextra -o $(NAME) $(SRC) -I$(IDIR)

clean:
	@rm -f $(NAME)
