/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 06:14:14 by bmoulin           #+#    #+#             */
/*   Updated: 2020/12/02 10:03:41 by bmoulin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*dest;

	dest = malloc(sizeof(void) * count * size);
	if (!dest)
		return (NULL);
	i = 0;
	while (i <= count * size)
	{
		dest[i] = 0;
		i++;
	}
	return ((void *)dest);
}
