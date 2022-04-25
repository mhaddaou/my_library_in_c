/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rout13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:36:15 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/04/25 17:24:11 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

void convert (char c)
{
    if ((c >= 97 && c <= 109) || (c >= 65 && c <= 77))
        ft_putchar(c + 13);
    else
        ft_putchar(c - 13);
}

void check_element(char *s, int order)
{
    int i;

    i = 0;
    while(s[i])
    {
        if (ft_isalpha(s[i]))
            convert(s[i]);
        else 
            ft_printf("%c",s[i]);
        i++;
    }
    if (order == 1)
        ft_putchar(' ');
    
}

void check_and_convert(char **str, int len)
{
    int i;

    i = 0;
    while (i < len)
    {
        if (i == len - 1)
            check_element(str[i], 0);
        else
            check_element(str[i], 1);
        i++;
    }
    
}

int main (int ac, char **av)
{
    if (ac > 1)
    {
        av++;
        check_and_convert(av, ac - 1);    
    }
    else{
        ft_putstr_fd("Usage:\n\tRoot13 test\n", 2);
        ft_putstr_fd("or\n\tRoot13 test1 test2 test3 ...", 2);
    }
}