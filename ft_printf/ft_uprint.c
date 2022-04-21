/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uprint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 02:29:32 by mhaddaou          #+#    #+#             */
/*   Updated: 2021/12/08 21:36:59 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len_u(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_unsigned_itoa(unsigned int n)
{
	int		len;
	int		t;
	char	*s;

	t = 0;
	len = len_u(n);
	s = (char *) malloc (sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len--] = '\0';
	while (n != 0)
	{
		t = n % 10;
		n = n / 10;
		s[len--] = t + 48;
	}
	return (s);
}

int	ft_uprint(unsigned int p)
{
	int		len;
	char	*s;

	len = 0;
	if (p == 0)
		len += write(1, "0", 1);
	else
	{
		s = ft_unsigned_itoa(p);
		len += ft_int_putstr(s);
		free(s);
	}
	return (len);
}
