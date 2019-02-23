# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/17 10:44:31 by ghtouman          #+#    #+#              #
#    Updated: 2018/02/19 17:43:59 by ghtouman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

IDIR = ./includes/
NAME = libft.a
OPTIONS = -c -I$(IDIR)
PATH_SRC = ./srcs/

SRC = $(PATH_SRC)ft_putchar.c $(PATH_SRC)ft_putstr.c $(PATH_SRC)ft_strcmp.c \
	  $(PATH_SRC)ft_strlen.c $(PATH_SRC)ft_swap.c

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all:
	gcc -Wall -Wextra -Werror $(OPTIONS) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm  -f $(NAME)

re: fclean all
