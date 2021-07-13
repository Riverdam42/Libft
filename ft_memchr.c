/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 12:44:54 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/12 13:33:23 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memchr(const void *s, int ch, size_t n)
{
	const unsigned char* p = s;
	size_t i = 0;

	while (i < n)
	{
		++p;
		if (*p == (unsigned char)ch)
		{
			return  (void*)p;
		}
	}
	return NULL;
}
