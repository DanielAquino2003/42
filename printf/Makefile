# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daniel <daniel@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 16:43:03 by daniel            #+#    #+#              #
#    Updated: 2024/01/25 16:43:05 by daniel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf
AR = ar rcs

SRC	=	ft_printf.c			\
		ft_putchar_pf.c		\
		ft_putstr_pf.c		\
		ft_putnbr_pf.c		\
		ft_putuint_pf.c		\
		ft_puthex_pf.c		\
		ft_putptr_pf.c		\
		ft_aux_pf.c			\

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)		

re:	fclean all

.PHONY:	all clean fclean re
