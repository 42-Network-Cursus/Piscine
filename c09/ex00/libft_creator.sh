# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cwastche <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/23 06:46:27 by cwastche          #+#    #+#              #
#    Updated: 2021/03/23 06:48:16 by cwastche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#!/bin/bash
gcc -c ft_putchar.c ft_strcmp.c ft_putstr.c ft_strlen.c ft_swap.c
ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
