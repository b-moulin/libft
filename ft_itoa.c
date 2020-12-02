/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 03:44:50 by bmoulin           #+#    #+#             */
/*   Updated: 2020/12/02 10:22:57 by bmoulin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long		ft_lendest(long long n)
{
	long long	size;
	long long	count;

	size = 0;
	if (n < 0)
	{
		count = -n;
		size++;
	}
	else
		count = n;
	while (count >= 10)
	{
		size++;
		count = count / 10;
	}
	size++;
	return (size);
}

static char				*ft_filldest(long long n, long long len, char *dest)
{
	dest[len] = '\0';
	len--;
	if (n < 0)
	{
		dest[0] = '-';
		n = -n;
	}
	while (n >= 10)
	{
		dest[len] = (n % 10) + 48;
		len--;
		n = n / 10;
	}
	dest[len] = n + 48;
	return (dest);
}

char					*ft_itoa(int n)
{
	char		*dest;
	long long	lln;

	if (n == 0)
	{
		dest = malloc(sizeof(char) * 2);
		if (!dest)
			return (NULL);
		dest[1] = '\0';
		dest[0] = '0';
		return (dest);
	}
	lln = n;
	if (!lln)
		return (NULL);
	dest = malloc(sizeof(char) * ft_lendest(lln) + 1);
	if (!dest)
		return (NULL);
	return (ft_filldest(lln, ft_lendest(lln), dest));
}
