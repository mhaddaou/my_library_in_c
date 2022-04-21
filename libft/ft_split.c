/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 10:39:28 by mhaddaou          #+#    #+#             */
/*   Updated: 2021/11/30 13:17:32 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_cal(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (s[i] != c)
		j++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
		{
			j++;
		}
		i++;
	}
	return (j);
}

static char	**freespl(char **spl, int i)
{
	while (i--)
		free (spl[i]);
	free (spl);
	return (spl);
}

static char	**word_res(char **spl, char c, char const *s)
{
	size_t	i;
	int		g;
	int		j;

	i = 0;
	g = -1;
	j = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && g < 0)
			g = i;
		else if ((s[i] == c || i == ft_strlen(s)) && g >= 0)
		{
			spl[j] = ft_substr(s, g, i - g);
			if (!spl[j])
				return (freespl(spl, j));
			j++;
			g = -1;
		}
		i++;
	}
	spl[j] = 0;
	return (spl);
}

char	**ft_split(char const *s, char c)
{
	char	**spl;

	if (!s)
		return (NULL);
	spl = (char **) malloc((word_cal(s, c) + 1) * sizeof(char *));
	if (!spl)
		return (NULL);
	spl = word_res(spl, c, s);
	return (spl);
}
