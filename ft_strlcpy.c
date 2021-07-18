/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 21:20:44 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/18 18:02:46 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy (char *dst, const char *src, size_t size)
{
	char obj1 = (char *)dst;
	const char obj2 = (char *)src;

	while (size > size - 1)
	{
		obj1 = obj2;
		obj1++;
		obj2++;
		if (obj1 == '\0')
			*dst = '\0';
		return (src - obj2 -1);
	}
}
