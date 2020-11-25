/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:56:33 by bmoulin           #+#    #+#             */
/*   Updated: 2020/11/25 14:36:37 by bmoulin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;

	i = ft_strlen(str) - 1;
	while (str[i] != (char)c && i >= 0)
	{
		i--;
		if (str[i] == (char)c)
			return ((char *)&str[i]);
	}
	return (str[i] != (char)c ? (char *)&str[i] : NULL);
}
