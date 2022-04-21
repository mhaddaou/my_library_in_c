/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 10:48:32 by mhaddaou          #+#    #+#             */
/*   Updated: 2021/11/21 22:26:00 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_copystr(char *dst, char *src)
{
	int	t;

	t = 0;
	while (src[t])
	{
		dst[t] = src[t];
		t++;
	}
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen (s1) + ft_strlen (s2);
	i = 0;
	j = 0;
	str = (char *) malloc (len + 1);
	if (!str)
		return (NULL);
	ft_copystr (str, (char *)s1);
	while (s1[i])
		i++;
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
