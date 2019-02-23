# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/24 13:30:27 by ghtouman          #+#    #+#              #
#    Updated: 2018/02/25 23:21:09 by ghtouman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

IDIR = ./includes/
PATH_SRC = ./srcs/
NAME00 = colle-00
NAME01 = colle-01
NAME02 = colle-02
NAME03 = colle-03
NAME04 = colle-04
NAME-2 = colle-2

COLLE00 = $(PATH_SRC)ft_putchar.c $(PATH_SRC)main.c $(PATH_SRC)rush00.c
COLLE01 = $(PATH_SRC)ft_putchar.c $(PATH_SRC)main.c $(PATH_SRC)rush01.c
COLLE02 = $(PATH_SRC)ft_putchar.c $(PATH_SRC)main.c $(PATH_SRC)rush02.c
COLLE03 = $(PATH_SRC)ft_putchar.c $(PATH_SRC)main.c $(PATH_SRC)rush03.c
COLLE04 = $(PATH_SRC)ft_putchar.c $(PATH_SRC)main.c $(PATH_SRC)rush04.c
COLLE-2 = $(PATH_SRC)ft_putchar.c $(PATH_SRC)ft_putstr.c \
			$(PATH_SRC)colle.c $(PATH_SRC)ft_list_push_back.c \
			$(PATH_SRC)ft_create_elem.c $(PATH_SRC)ft_strdup.c \
			$(PATH_SRC)ft_strcat.c $(PATH_SRC)check_match.c \
			$(PATH_SRC)ft_nb_x_y.c $(PATH_SRC)init.c $(PATH_SRC)ft_strncmp.c \
			$(PATH_SRC)ft_putnbr.c

all:
	gcc -Wall -Wextra -Werror -o $(NAME00) $(COLLE00) -I$(IDIR)
	gcc -Wall -Wextra -Werror -o $(NAME01) $(COLLE01) -I$(IDIR)
	gcc -Wall -Wextra -Werror -o $(NAME02) $(COLLE02) -I$(IDIR)
	gcc -Wall -Wextra -Werror -o $(NAME03) $(COLLE03) -I$(IDIR)
	gcc -Wall -Wextra -Werror -o $(NAME04) $(COLLE04) -I$(IDIR)
	gcc -Wall -Wextra -Werror -o $(NAME-2) $(COLLE-2) -I$(IDIR)

clean:
	rm -f $(NAME00)
	rm -f $(NAME01)
	rm -f $(NAME02)
	rm -f $(NAME03)
	rm -f $(NAME04)
	rm -f $(NAME-2)

fclean: clean

re: fclean all
