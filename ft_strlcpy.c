/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 14:28:58 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/26 13:42:39 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy (char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t src_len;

	if (!dst || !src)
		return (0);
	src_len = 0;
	while (*(src + src_len))
	{
		src_len++;
	}
	i = 0;
	while (dstsize <= dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len -1);
}
