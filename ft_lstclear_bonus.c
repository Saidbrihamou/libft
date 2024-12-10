/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrihamo <sbrihamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:40:03 by sbrihamo          #+#    #+#             */
/*   Updated: 2024/10/31 15:25:11 by sbrihamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node_tobe_free;
	t_list	*temp;

	if (!lst)
		return ;
	node_tobe_free = *lst;
	*lst = NULL;
	while (node_tobe_free != NULL)
	{
		temp = node_tobe_free;
		node_tobe_free = node_tobe_free->next;
		if (del)
			(*del)(temp->content);
		free(temp);
	}
}
