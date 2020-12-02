/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 13:16:05 by bmoulin           #+#    #+#             */
/*   Updated: 2020/12/02 10:08:57 by bmoulin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;

	str = s;
	i = 0;
	if (c == '\0')
		return ((char *)str + ft_strlen((char *)str));
	while (str[i] && i < n)
	{
		if (str[i] == c)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
