/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 05:09:36 by bmoulin           #+#    #+#             */
/*   Updated: 2020/12/07 10:24:59 by bmoulin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*nxt;

	tmp = *lst;
	while (tmp)
	{
		nxt = tmp->next;
		del(tmp->content);
		free(tmp);
		tmp = nxt;
	}
	*lst = NULL;
}
