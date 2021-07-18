/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 12:45:39 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/18 17:59:07 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void* s1, const void* s2, size_t n)
{
	const char* p1 = s1;
	const char* p2 = s2;
	size_t i = 0;

	while (*p1 == *p2)
	{
		++i;
		++p1;
		++p2;
		if (n <= i)
			return 0;
		else if (*p1 < *p2)
			return -1;
		else if (*p1 > *p2)
			return 1;
}
