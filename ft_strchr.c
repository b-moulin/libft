/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:56:33 by bmoulin           #+#    #+#             */
/*   Updated: 2020/12/02 10:19:30 by bmoulin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;

	i = 0;
	while (str[i] != (char)c && str[i])
	{
		i++;
		if (str[i] == (char)c)
			return ((char *)&str[i]);
	}
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (NULL);
}
