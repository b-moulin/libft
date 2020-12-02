/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 14:10:04 by bmoulin           #+#    #+#             */
/*   Updated: 2020/12/02 10:15:13 by bmoulin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	maxlen;
	char	*dest;

	maxlen = start + len;
	i = 0;
	if (!s)
		return (NULL);
	dest = malloc(sizeof(char) * len + 1);
	if (start >= ft_strlen(s) || !s || len == 0)
	{
		dest[i] = '\0';
		return (dest);
	}
	if (!dest)
		return (NULL);
	while (start < maxlen)
	{
		dest[i] = s[start];
		start++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
