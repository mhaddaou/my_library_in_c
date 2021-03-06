# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaddaou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/19 14:36:03 by mhaddaou          #+#    #+#              #
#    Updated: 2022/04/25 17:28:05 by mhaddaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = "library.a"

FILES = ft_putchar.c ft_putnbr.c ft_putstr.c ft_to_dic.c push.c unshift.c

OBJECTS = ft_putchar.o ft_putnbr.o ft_putstr.o ft_to_dic.o push.o unshift.o

all:
	@gcc -c -Wall -Wextra -Werror $(FILES)
	@cd libft && make all
	@cd ft_printf && make all
	@ar rcs $(NAME) $(OBJECTS) libft/*.o ft_printf/*.o
	@gcc root13.c library.a -o Root13

clean:
	@rm -f $(OBJECTS)
	@cd libft && make clean
	@cd ft_printf && make clean

fclean: clean
	@rm -f $(NAME)
	@cd libft && make fclean
	@cd ft_printf && make fclean
	@rm Root13

re: fclean all


	
