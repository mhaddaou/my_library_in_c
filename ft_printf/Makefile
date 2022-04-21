# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaddaou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/08 02:07:05 by mhaddaou          #+#    #+#              #
#    Updated: 2022/02/28 20:14:33 by mhaddaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = "ft_printf.a"

all:
	@gcc -c -Wall -Wextra -Werror *.c
	@ar rcs ft_printf.a *.o

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

bonus: fclean
	@gcc -c -Wall -Wextra -Werror *.c
	@ar rcs ft_printf.a *.o%
