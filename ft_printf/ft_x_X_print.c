/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_X_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 03:59:56 by mhaddaou          #+#    #+#             */
/*   Updated: 2021/12/09 00:30:34 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_xuptr(unsigned int p)
{
	if (p >= 16)
	{
		ft_xuptr(p / 16);
		ft_xuptr(p % 16);
	}
	else
	{
		if (p < 10)
			ft_putchar_fd((p + 48), 1);
		else
			ft_putchar_fd((p + 55), 1);
	}
}

int	ft_x_xu_print(unsigned int p, char c)
{
	int	len;

	len = 0;
	if (p == 0)
		len += write(1, "0", 1);
	else
	{
		if (c == 'x')
			ft_ptrp(p);
		else if (c == 'X')
			ft_xuptr(p);
		len += ft_len(p);
	}
	return (len);
}
