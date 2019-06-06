# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atitus <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/20 09:25:36 by atitus            #+#    #+#              #
#    Updated: 2019/06/06 12:17:47 by atitus           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRC = ft_isdigit.c \
	  ft_putendl.c \
	  ft_strequ.c \
	  ft_strnew.c \
	  ft_isprint.c \
ft_putendl_fd.c \
ft_striter.c \
ft_strnstr.c \
ft_itoa.c \
ft_putnbr.c \
ft_striteri.c \
ft_strrchr.c \
ft_memalloc.c \
ft_putnbr_fd.c \
ft_strjoin.c \
ft_strsplit.c \
ft_memccpy.c \
ft_putstr.c \
ft_strlcat.c \
ft_strstr.c \
ft_memchr.c \
ft_putstr_fd.c \
ft_strlen.c \
ft_strsub.c \
ft_memcmp.c \
ft_strcat.c \
ft_strmap.c \
ft_strtrim.c \
ft_atoi.c \
ft_memcpy.c \
ft_strchr.c \
ft_strmapi.c \
ft_tolower.c \
ft_bzero.c \
ft_memdel.c \
ft_strclr.c \
ft_strncat.c \
ft_toupper.c \
ft_countwords.c \
ft_memmove.c \
ft_strcmp.c \
ft_strncmp.c \
ft_wordlen.c \
ft_isalnum.c \
ft_memset.c \
ft_strcpy.c \
ft_strncpy.c \
ft_isalpha.c \
ft_putchar.c \
ft_strdel.c \
ft_strndup.c \
ft_isascii.c \
ft_putchar_fd.c \
ft_strdup.c \
ft_strnequ.c \

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
