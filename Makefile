# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mananton <telesmanuel@hotmail.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/13 12:08:50 by mananton          #+#    #+#              #
#    Updated: 2024/11/19 13:36:06 by mananton         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_char.c ft_percent.c ft_putchar.c ft_string.c \
ft_format.c  ft_pointer.c  ft_putnbr.c	    ft_unsigned.c \
ft_int.c     ft_printf.c   ft_putnbr_hex.c  ft_uphex.c \
ft_lowhex.c  ft_putstr.c	

OBJS = $(SRC:.c=.o)

CC = @cc
CFLAGS = -Wall -Werror -Wextra -I.
RM = @rm -rf
AR = @ar crs

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	@echo "Done"

all: $(NAME)

clean:
	$(RM) $(OBJS)
	@echo "Cleaned"

fclean:	clean
	$(RM) $(NAME)		

re:	fclean all

.PHONY:	all clean fclean re
