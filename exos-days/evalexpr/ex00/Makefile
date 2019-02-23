# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/25 11:34:01 by ghtouman          #+#    #+#              #
#    Updated: 2018/02/25 19:06:15 by ghtouman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

IDIR = ./includes/
NAME = eval_expr
PATH_SRC = ./srcs/
SRC = $(PATH_SRC)main.c $(PATH_SRC)destroy.c $(PATH_SRC)evalexp.c \
		$(PATH_SRC)ft_putnbr.c $(PATH_SRC)ft_putchar.c

all:
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRC) -I$(IDIR)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
