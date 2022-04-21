/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 23:18:03 by mhaddaou          #+#    #+#             */
/*   Updated: 2021/12/09 04:52:50 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <string.h>
# include <stdlib.h>
# include <limits.h>

int		ft_printf(const char *str, ...);
int		ft_int_putchar(char c);
int		ft_int_putstr(char *s);
int		ft_hex_print(unsigned long long ptr);
int		ft_nbr(int n);
int		ft_uprint(unsigned int p);
void	ft_ptrp(unsigned long long p);
int		ft_len(unsigned long long p);
int		ft_x_xu_print(unsigned int p, char c);
int		ft_printpercent(void);
int		ft_format(va_list ptr, char c);
void	ft_xuptr(unsigned int p);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
int		num_nbr(long num);

#endif
