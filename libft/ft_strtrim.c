/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 12:23:53 by mhaddaou          #+#    #+#             */
/*   Updated: 2021/11/24 22:02:36 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_word(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (c == s[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_strresu(const char *s, size_t start, size_t end)
{
	size_t	len;
	char	*str;
	size_t	i;

	i = 0;
	len = end - start + 1;
	str = malloc (len * sizeof(char));
	if (!str)
		return (NULL);
	while (start < end)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = 0;
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*str;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	while (s1[i] && size_word((char *)set, s1[i]))
		i++;
	while (len > i && size_word((char *)set, s1[len - 1]))
		len--;
	str = ft_strresu(s1, i, len);
	return (str);
}
