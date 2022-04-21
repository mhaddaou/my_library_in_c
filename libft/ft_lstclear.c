/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 02:38:16 by mhaddaou          #+#    #+#             */
/*   Updated: 2021/11/29 12:33:39 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp_node;

	if (!del || !*lst)
		return ;
	while (*lst != NULL)
	{
		del((*lst)->content);
		temp_node = *lst;
		*lst = temp_node->next;
		free(temp_node);
	}
	*lst = NULL;
}
