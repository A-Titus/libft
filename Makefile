# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atitus <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/20 09:25:36 by atitus            #+#    #+#              #
#    Updated: 2019/05/28 09:14:20 by atitus           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRC = *.c

SRCO = *.o

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
