/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 19:12:40 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/17 13:23:21 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *ft_memcpy(void *buf1, const void *buf2, size_t n)
{
	char obj1 = (char *)buf1;
	const char obj2 = (char *)buf2;

	while (n-- > 0)
	{
		*obj1 = *obj2;
		obj1++;
		obj2++;
	}
	return buf1;
}
