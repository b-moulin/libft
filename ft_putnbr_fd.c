/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 06:32:35 by bmoulin           #+#    #+#             */
/*   Updated: 2020/12/02 10:29:15 by bmoulin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long	lln;

	lln = n;
	if (lln < 0)
	{
		ft_putchar_fd('-', fd);
		lln = -lln;
	}
	if (lln >= 10)
	{
		ft_putnbr_fd(lln / 10, fd);
		ft_putchar_fd(lln % 10 + 48, fd);
	}
	else
	{
		ft_putchar_fd(lln + 48, fd);
	}
}
