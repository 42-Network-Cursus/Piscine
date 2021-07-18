# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cwastche <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/23 07:34:23 by cwastche          #+#    #+#              #
#    Updated: 2021/03/24 08:10:13 by cwastche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c
OBJS	= ${SRCS:.c=.o}
NAME	= libft.a
HEAD	= includes/ft.h
CC	= gcc
CFLAGS	= -Wall -Wextra -Werror -Iincludes

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS} ${HEAD}
	ar -rcs ${NAME} ${OBJS} ${HEAD}

all:		${NAME}

clean:
	rm -f ${OBJS}

fclean:		clean
	rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
