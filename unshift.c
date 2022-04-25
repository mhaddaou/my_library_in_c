/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unshift.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: By: mhaddaou <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 01:10:05 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/04/25 16:24:24 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

char **unshift(char **s1, char *s2)
{
    int     len;
    char    **str;
    int     i;
    int     j;

    i = 1;
    j = 0;
    len = lendoublestr(s1);
    str = (char **) malloc (sizeof(char) * (len + 2));
    if (!str)
        exit(EXIT_FAILURE);
    while ( i <= len)
    {
        str[i] = ft_strdup(s1[j]);
        i++;
        j++;
    }
    str[0] = ft_strdup(s2);
    str[1] = s1[0];
    str[i] = NULL;
    return (str);
}
