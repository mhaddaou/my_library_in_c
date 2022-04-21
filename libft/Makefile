# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaddaou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/20 06:17:05 by mhaddaou          #+#    #+#              #
#    Updated: 2022/02/26 13:08:53 by mhaddaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = "libft.a"

all:
	@gcc -c -Wall -Wextra -Werror *.c
	@ar rcs libft.a *.o

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

bonus: fclean
	@gcc -c -Wall -Wextra -Werror *.c
	@ar rcs libft.a *.o%
