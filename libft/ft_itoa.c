/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:48:27 by mhaddaou          #+#    #+#             */
/*   Updated: 2021/11/29 13:14:07 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_chr(int c)
{
	int	count;

	count = 0;
	if (c <= 0)
		count++;
	while (c != 0)
	{
		c = c / 10;
		count++;
	}
	return (count);
}

static char	*convert(char *str, int len, long i)
{
	int	t;

	str[len] = '\0';
	while (i != 0)
	{
		t = i % 10;
		str[--len] = t + 48;
		i = i / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = count_chr(n);
	str = (char *)malloc (sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (n == INT_MIN)
		return (ft_memmove(str, "-2147483648", len));
	if (n == 0)
		str[0] = 48;
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	str = convert(str, len, n);
	return (str);
}
