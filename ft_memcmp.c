/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 12:45:39 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/09 17:01:44 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void* s1, const void* s2, size_t n)
{
	const char* p1;
	const char* p2;
	unsigned int i;

	p1 = (const char *)s1;
	p2 = (const char *)s2;

	i = 0;
	while (i < n)
	{
		++i;
		++p1;
		++p2;
		if (p1 == p2)
			return 0;
		else if (*p1 > *p2)
			return 1;
		else if (*p1 < *p2)
			return -1;
    }
	return (p1 - p2);
}
