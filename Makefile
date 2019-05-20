# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atitus <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/20 09:25:36 by atitus            #+#    #+#              #
#    Updated: 2019/05/20 10:32:20 by atitus           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRC = $(shell ls | grep -E "ft_.+\.c")

SRCO =$(shell ls | grep -E "ft_.+\.o")

CFLAGS = -Wall -Werror -Wextra 

HEADER = ./includes/

all: $(NAME)

$(NAME):
	gcc -c $(CFLAGS) $(SRC)
	ar rc $(NAME) $(SRCO)
	ranlib $(NAME)

clean:
	/bin/rm -f $(SRCO)

fclean: clean
	/bin/rm -f $(NAME)

re : fclean all
