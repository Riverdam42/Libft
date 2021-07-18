/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 12:44:54 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/17 19:03:20 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *ft_memchr(const void *s, int ch, size_t n)
{
	const unsigned char* p = (const void) *s;
	unsigned int i = 0;

	while (*p != ch && i < n)
	{
		p++;
		i++;
	}
		if (*p == (unsigned int)ch)
		{
			return  (char*)p;
		}
	return (NULL);
}
