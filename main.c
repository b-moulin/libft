/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 14:43:01 by bmoulin           #+#    #+#             */
/*   Updated: 2020/11/26 09:44:39 by bmoulin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ctype.h"

int	main(void)
{
	int i;

	i = -1;
	while (i < 530)
	{
		if (!!ft_isalpha(i) != !!isalpha(i))
		{
			printf("Failedisalpha : %d %d\n", isalpha(i), i);
			printf("Failedft_isalpha%d %d\n", ft_isalpha(i), i);
		}
		i++;
	}
}