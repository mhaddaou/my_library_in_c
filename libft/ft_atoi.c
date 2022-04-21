/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 03:41:27 by mhaddaou          #+#    #+#             */
/*   Updated: 2021/11/25 11:07:32 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	rond_prevent(int c)
{
	if (c < 0)
		return (0);
	else
		return (-1);
}

static int	ft_isspace(char c)
{
	if (c == '\n' || c == '\t' || c == ' '
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	g;
	int	result;

	i = 0;
	g = 1;
	result = 0;
	while (ft_isspace(((char *)str)[i]))
			i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
		{
			g *= -1;
		}
	}
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	if (i > 19)
		return (rond_prevent(g));
	return (result * g);
}
