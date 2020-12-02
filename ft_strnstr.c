/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 06:12:04 by bmoulin           #+#    #+#             */
/*   Updated: 2020/12/02 10:46:54 by bmoulin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	p;

	p = 0;
	i = 0;
	j = 0;
	if (ft_strlen(needle) > ft_strlen(haystack))
		return (NULL);
	if (!needle[0] || !haystack)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		while (haystack[i] != needle[j] && haystack[i] && i < len)
			i++;
		if (haystack[i] == needle[j])
			p = i;
		while (haystack[i] == needle[j] && haystack[i] && needle[j] && i < len)
		{
			i++;
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + p);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
