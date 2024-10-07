/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nroson-m <nroson-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:17:24 by nroson-m          #+#    #+#             */
/*   Updated: 2024/10/04 17:33:53 by nroson-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*now;
	t_list	*sig;

	if (!lst || !del)
		return ;
	now = *lst;
	while (now)
	{
		sig = now->next;
		del(now->content);
		free(now);
		now = sig;
	}
	*lst = NULL;
}
