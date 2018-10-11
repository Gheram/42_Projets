# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/26 13:02:21 by ghtouman          #+#    #+#              #
#    Updated: 2018/05/02 12:11:40 by ghtouman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Werror -Wextra
IDIR = ./includes/
NAME = fillit
SRC_PATH = ./srcs/
LIB_PATH = ./libft/
LIB = libft/libft.a

SRC = $(SRC_PATH)fillit.c			\
		$(SRC_PATH)ft_init_list.c	\
		$(SRC_PATH)ft_sqrt.c		\
		$(SRC_PATH)tab_map.c		\
		$(SRC_PATH)check_error.c



OBJ = $(SRC:.c=.o)

all:$(NAME)
$(NAME): $(LIB) $(OBJ)
	gcc $(OBJ) $(LIB) -I $(LIB_PATH) -o $(NAME)

%.o: %.c
	gcc -c $(FLAG) $< -o $@ -I$(IDIR)

clean:
	rm -f $(OBJ)
	make clean -C $(LIB_PATH)

fclean: clean
	rm -f $(NAME)
	rm -f $(LIB)

re: fclean all

libft/libft.a:
	make -C libft
