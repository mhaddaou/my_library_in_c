/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 23:17:32 by mhaddaou          #+#    #+#             */
/*   Updated: 2021/12/10 03:17:22 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list ptr, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_int_putchar(va_arg(ptr, int));
	if (c == 's')
		count += ft_int_putstr(va_arg(ptr, char *));
	if (c == 'p')
		count += ft_hex_print(va_arg(ptr, unsigned long long));
	if (c == 'd' || c == 'i')
		count += ft_nbr(va_arg(ptr, int));
	if (c == 'u')
		count += ft_uprint(va_arg(ptr, unsigned int));
	if (c == 'x' || c == 'X')
		count += ft_x_xu_print(va_arg(ptr, unsigned int), c);
	if (c == '%')
		count += ft_printpercent();
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	p_ptr;

	i = 0;
	count = 0;
	va_start(p_ptr, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += ft_format(p_ptr, str[i + 1]);
			i++;
		}
		else
			count += ft_int_putchar(str[i]);
		i++;
	}
	va_end(p_ptr);
	return (count);
}
