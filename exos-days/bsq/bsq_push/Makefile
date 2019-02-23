# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/26 10:57:29 by ghtouman          #+#    #+#              #
#    Updated: 2018/02/28 23:25:24 by asamir-k         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
IDIR = ./includes/
PATH_SRC = ./srcs/

SRC = $(PATH_SRC)main.c $(PATH_SRC)ft_create_elem.c $(PATH_SRC)ft_strcat.c \
		$(PATH_SRC)ft_list_push_back.c $(PATH_SRC)ft_strdup.c \
		$(PATH_SRC)ft_putstr.c $(PATH_SRC)ft_putchar.c \
		$(PATH_SRC)nb_line.c $(PATH_SRC)ft_grid_intsert.c \
		$(PATH_SRC)matrixalgo.c $(PATH_SRC)change.c \
		$(PATH_SRC)errors.c $(PATH_SRC)ft_atoi.c


all:
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRC) -I$(IDIR)
clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
