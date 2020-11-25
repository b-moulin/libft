/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 12:54:18 by bmoulin           #+#    #+#             */
/*   Updated: 2020/11/25 14:01:36 by bmoulin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFT_H
#define	LIBFT_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlen(const char *str);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *str, int c);
int	ft_tolower(char c);
char	ft_toupper(char c);

#endif