/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 14:43:01 by bmoulin           #+#    #+#             */
/*   Updated: 2020/12/02 09:26:34 by bmoulin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int				main(int argc, const char *argv[])
{
	
		printf("ft_strnstr : %s\n", ft_strnstr("lorem ipsum dolor sit amet", "consectetur", 30));
		printf("strnstr : %s\n", strnstr("lorem ipsum dolor sit amet", "consectetur", 30));

}