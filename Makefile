# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guroux <guroux@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 15:00:56 by guroux            #+#    #+#              #
#    Updated: 2018/11/14 18:30:36 by guroux           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC  =  ./ft_memalloc.c 	\
		./ft_bzero.c		\
		./ft_strlen.c		\
		./ft_toupper.c		\
		./ft_tolower.c		\
		./ft_isdigit.c		\
		./ft_isalpha.c		\
		./ft_isalnum.c		\
		./ft_isascii.c		\
		./ft_isprint.c		\
		./ft_strcmp.c		\
		./ft_strncmp.c		\
		./ft_putnbr.c		\
		./ft_putchar.c		\
		./ft_putstr.c		\
		./ft_putendl.c		\
		./ft_memdel.c		\
		./ft_strnew.c		\
		./ft_strdel.c		\
		./ft_strclr.c		\
		./ft_striter.c		\
		./ft_striteri.c		\
		./ft_strmap.c		\
		./ft_strmapi.c		\
		./ft_strequ.c		\
		./ft_strnequ.c		\
		./ft_strsub.c		\
		./ft_strjoin.c		\
		./ft_strsplit.c		\
		./ft_strtrim.c		\
		./ft_putchar_fd.c	\
		./ft_putstr_fd.c	\
		./ft_putendl_fd.c	\
		./ft_putnbr_fd.c	\
		./ft_memset.c		\
		./ft_memcpy.c		\
		./ft_memccpy.c		\
		./ft_memmove.c		\
		./ft_memchr.c

HEADER = ./libft.h

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC) $(HEADER)
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all