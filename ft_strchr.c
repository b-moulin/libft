/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:56:33 by bmoulin           #+#    #+#             */
/*   Updated: 2020/11/23 16:55:21 by bmoulin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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
	return (NULL);
}
