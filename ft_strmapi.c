/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 08:03:38 by bmoulin           #+#    #+#             */
/*   Updated: 2020/12/07 03:37:20 by bmoulin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	size_t	i;
	size_t	len;

	if (!s || !f)
		return (NULL);
	if (s[0] == '\0')
	{
		if (!(dest = malloc(sizeof(char))))
			return (NULL);
		dest[0] = '\0';
		return (dest);
	}
	len = ft_strlen(s);
	i = 0;
	if (!(dest = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i <= len - 1)
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
