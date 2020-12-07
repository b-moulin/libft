/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 14:10:04 by bmoulin           #+#    #+#             */
/*   Updated: 2020/12/04 17:31:56 by bmoulin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lignes(const char *s, char *dest, size_t i, size_t start)
{
	if (start >= ft_strlen(s))
	{
		dest[i] = '\0';
		return (0);
	}
	return (1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	maxlen;
	char	*dest;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		if (!(dest = malloc(sizeof(char))))
			return (NULL);
		dest[0] = '\0';
		return (dest);
	}
	len = len > ft_strlen(s) ? ft_strlen(s) + start : len;
	maxlen = start + len;
	i = 0;
	if (!(dest = malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (ft_lignes(s, dest, i, start) == 0)
		return (dest);
	while (start < maxlen)
		dest[i++] = s[start++];
	dest[i] = '\0';
	return (dest);
}
