/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 09:01:05 by bmoulin           #+#    #+#             */
/*   Updated: 2020/12/02 10:14:34 by bmoulin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_topsize(const char *s1, const char *set)
{
	int		i;
	size_t	j;

	i = ft_strlen(s1) - 1;
	j = 0;
	while (set[j] && i >= 0)
	{
		if (s1[i] == set[j])
		{
			i--;
			j = -1;
		}
		j++;
	}
	return (i);
}

size_t	ft_bottomsize(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (set[j] && s1[i])
	{
		if (s1[i] == set[j])
		{
			i++;
			j = -1;
		}
		j++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;

	if (!s1)
		return (NULL);
	if (ft_bottomsize(s1, set) == ft_strlen(s1))
	{
		dest = malloc(sizeof(char) * 1);
		dest[0] = '\0';
		return (dest);
	}
	dest = ft_substr(s1, (unsigned int)ft_bottomsize(s1, set),
		(size_t)(ft_topsize(s1, set) - ft_bottomsize(s1, set) + 1));
	return (dest);
}
