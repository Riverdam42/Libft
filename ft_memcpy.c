/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 19:12:40 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/22 14:11:44 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	char *obj1;
	const char *obj2;

	obj1 = (char *)dst;
	obj2 = (char *)src;

	while (n-- > 0)
	{
		*obj1 = *obj2;
		obj1++;

	}
	return dst;
}
