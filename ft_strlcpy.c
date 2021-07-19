/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 21:20:44 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/19 12:09:44 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy (char *dst, const char *src, size_t size)
{
	char obj1[] = (char *)dst;
	const char obj2[] = (char *)src;

	size_t i;
	size_t src_len;

	src_len = 0;
	while  ()
	if (obj1 == 0)
	return (src_len);
	i = 0;
	while (size <= size - 1)
	{
		obj1[i] = obj2[i];
		i++;
	}
	obj1[i] = '\0';
	return (src_len -1);
}
