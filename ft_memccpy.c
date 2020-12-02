/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 07:07:17 by bmoulin           #+#    #+#             */
/*   Updated: 2020/12/02 10:07:52 by bmoulin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dest;
	unsigned const char	*source;
	size_t				i;

	i = 0;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	while (source[i] != (unsigned char)c && i < n)
	{
		dest[i] = source[i];
		i++;
	}
	if (source[i] == (unsigned char)c)
		dest[i] = source[i];
	if (i == n)
		return (NULL);
	return (dest + i + 1);
}
