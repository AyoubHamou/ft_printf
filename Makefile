# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahamou <ahamou@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/12 08:35:36 by ahamou            #+#    #+#              #
#    Updated: 2022/11/12 12:02:29 by ahamou           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c ft_putchar.c ft_puthexa.c ft_putnbr.c ft_putstr.c ft_putunsignednbr.c \

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): 	$(OBJS)
			ar -rc $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS) $(BOBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all