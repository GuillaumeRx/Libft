# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guroux <guroux@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 15:00:56 by guroux            #+#    #+#              #
#    Updated: 2018/11/08 19:27:25 by guroux           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC  =  ./ft_memalloc.c \
		./ft_bzero.c	\
		./ft_strlen.c	\
		./ft_toupper.c	\
		./ft_tolower.c	\
		./ft_isdigit.c	\
		./ft_isalpha.c	\
		./ft_isalnum.c	\
		./ft_isascii.c	\
		./ft_isprint.c	\
		./ft_strcmp.c	\
		./ft_strncmp.c

HEADER = ./libft.h

all: $(NAME) clean

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC) $(HEADER)
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	/bin/rm -f *.o
	/bin/rm -f *.gch

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all