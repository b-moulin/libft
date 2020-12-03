/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 08:03:38 by bmoulin           #+#    #+#             */
/*   Updated: 2020/12/02 14:24:57 by bmoulin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	i = 0;
	if (!s || !f)
		return (NULL);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (i <= len - 1)
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
