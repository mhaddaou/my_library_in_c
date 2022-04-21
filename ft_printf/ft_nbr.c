/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 01:01:30 by mhaddaou          #+#    #+#             */
/*   Updated: 2021/12/09 04:52:08 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	num_nbr(long num)
{
	int	i;

	i = 0;
	if (num <= 0)
		i = 1;
	while (num != 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

int	ft_nbr(int n)
{
	int		len;

	len = 0;
	ft_putnbr_fd(n, 1);
	len += num_nbr(n);
	return (len);
}
