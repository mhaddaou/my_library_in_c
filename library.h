/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   library.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psychom <psychom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 10:52:17 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/04/25 01:02:25 by psychom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBRARY_H

# define LIBRARY_H

# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

int		ft_change_char_to_deci(const char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int n);
char    **push(char **s1, char *s2);

#endif
