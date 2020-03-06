#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esalorin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/16 15:41:02 by esalorin          #+#    #+#              #
#    Updated: 2019/10/17 15:09:02 by esalorin         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = "libft.a"

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all :
	gcc -c $(SRC) -Iincludes
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all