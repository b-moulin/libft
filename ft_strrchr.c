/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:56:33 by bmoulin           #+#    #+#             */
/*   Updated: 2020/11/23 17:19:04 by bmoulin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int		ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrchr(const char *str, int c)
{
	int		i;

	i = ft_strlen(str) - 1;
	while (str[i] != (char)c && str[i])
	{
		i--;
		if (str[i] == (char)c)
			return ((char *)&str[i]);
	}
	return (NULL);
}
