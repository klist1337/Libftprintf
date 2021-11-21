# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eassofi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/20 18:58:34 by eassofi           #+#    #+#              #
#    Updated: 2021/11/20 19:20:50 by eassofi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr_int.c\
	   print_hex_lowercase.c print_hex_uppercase.c ft_putnbr_uint.c\

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

all : $(NAME)

$(NAME) :
		 $(CC) $(CFLAGS) -c $(SRCS)
		 ar -rc $(NAME) $(OBJS)
		 ranlib $(NAME)

clean  : 
	    $(RM) $(OBJS)

fclean : clean
	    $(RM) $(NAME)

re     : fclean all 
