# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/26 13:02:21 by ghtouman          #+#    #+#              #
#    Updated: 2019/01/14 17:57:35 by ghtouman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Werror -Wextra
NAME = gnl
LIB_PATH = ./libft/
LIB = libft/libft.a

SRC = get_next_line.c	\
	 main.c

OBJ = $(SRC:.c=.o)


all:$(NAME)
$(NAME): $(LIB) $(OBJ)
	gcc $(OBJ) -fsanitize=address $(LIB) -I $(LIB_PATH) -o $(NAME)

%.o: %.c
	gcc -c $(FLAG) $< -o $@

$(OBJ) : get_next_line.h

clean:
	rm -f $(OBJ)
	make clean -C $(LIB_PATH)

fclean: clean
	rm -f $(NAME)
	rm -f $(LIB)

re: fclean all

libft/libft.a:
	make -C libft
