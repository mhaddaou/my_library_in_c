/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psychom <psychom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 23:50:28 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/04/21 16:27:19 by psychom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len(unsigned long long l)
{
	int	len;

	len = 0;
	while (l != 0)
	{
		l = l / 16;
		len++;
	}
	return (len);
}

void	ft_ptrp(unsigned long long p)
{
	if (p >= 16)
	{
		ft_ptrp(p / 16);
		ft_ptrp(p % 16);
	}
	else
	{
		if (p < 10)
			ft_putchar_fd((p + 48), 1);
		else
			ft_putchar_fd((p + 87), 1);
	}
}

int	ft_hex_print(unsigned long long ptr)
{
	int	count;

	count = 0;
	count += write(1, "0x", 2);
	if (ptr == 0)
		count += write(1, "0", 1);
	else
		ft_ptrp(ptr);
	count += ft_len(ptr);
	return (count);
}
