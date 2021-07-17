/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 19:38:05 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/17 13:27:37 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *ft_memmove(void *buf1, const void *buf2, size_t n)
{
	char *obj1 = (char *)buf1;
	const char *obj2 = (const char *)buf2;

	if (obj1 < obj2 && obj1 < obj2 + n)
	while (n-- > 0)
	{
		obj1 = obj1 + n;
		*obj1-- = *obj2--;
	}
	else (n-- > 0)
		*obj1++ = *obj2++;
	return buf1;
}
