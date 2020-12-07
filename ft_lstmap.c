/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 06:33:36 by bmoulin           #+#    #+#             */
/*   Updated: 2020/12/07 09:24:30 by bmoulin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dest;
	t_list	*start;

	if (!lst || !(dest = malloc(sizeof(t_list))))
		return (NULL);
	start = dest;
	dest->content = f(lst->content);
	while (lst->next)
	{
		if (!(dest->next = malloc(sizeof(t_list))))
		{
			while (start)
			{
				del(start->content);
				start = start->next;
			}
			return (NULL);
		}
		dest = dest->next;
		dest->content = f(lst->content);
		lst = lst->next;
	}
	dest->next = 0;
	return (start);
}
