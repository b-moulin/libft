/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 08:03:38 by bmoulin           #+#    #+#             */
/*   Updated: 2020/12/02 08:54:47 by bmoulin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (NULL);

	dest = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!dest)
		return (NULL);
	dest[ft_strlen(s)] = '\0';
	while (dest[i])
	{
		dest[i] = '0';
		i++;
	}
	i = 0;
	while (dest[i])
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	return (dest);
}