/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 22:45:57 by mhaddaou          #+#    #+#             */
/*   Updated: 2021/11/21 00:06:15 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	i = ft_strlen((char *)s);
	if (c == '\0')
		return (ft_strchr(s, '\0'));
	while (i-- > 0)
	{
		if (((char *)s)[i] == (char)c)
			return ((char *)&s[i]);
	}
	return (NULL);
}
