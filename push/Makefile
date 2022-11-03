# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aerraoui <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 18:29:49 by aerraoui          #+#    #+#              #
#    Updated: 2022/11/03 00:37:28 by aerraoui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a
CC = CC
CFLAGS = -Wall -Wextra -Werror


SRC = lib/ft_itoa.c lib/ft_strlen.c lib/ft_putnbr.c  lib/ft_putchar.c lib/ft_puthexa.c lib/ft_putstr.c   lib/ft_putadd.c\
		lib/ft_putuns.c ft_printf.c 

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all