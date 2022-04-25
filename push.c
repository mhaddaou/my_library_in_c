/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 22:37:49 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/04/25 01:01:38 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

int lendoublestr(char **str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

char **push(char **s1, char *s2)
{
    int len;
    char **str;
    int i;
    
    i = 0;
    len = lendoublestr(s1);
    str = (char **) malloc (sizeof(char) * (len + 2));
    if (!str)
        exit(EXIT_FAILURE);
    while(i < len)
    {
        
        str[i] = ft_strdup(s1[i]);
        i++;
    }
    str[i++] = ft_strdup(s2);
    str[i] = NULL;
    str[0] = s1[0];
    return (str);    
}
