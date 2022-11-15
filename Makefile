# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 17:57:44 by mghalmi           #+#    #+#              #
#    Updated: 2022/11/14 17:57:45 by mghalmi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SCRS =  ft_puthex.c   ft_putptr.c   ft_putuint.c   \
		ft_printf.c   ft_putchar.c  ft_putint.c   ft_putstr.c   ft_putuphex.c

INLUDE = ft_printf.h

OBJ = $(SCRS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ) $(INLUDE)
	ar rc $(NAME) $(OBJ)
	
clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re: fclean all