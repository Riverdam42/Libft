/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 19:38:05 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/23 13:39:26 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *d;
	const char *s;
	size_t i;

	d = (char *)dest;
	s = (const char *)src;
	if (d < s)
	{
		i = 0;
		while (i > n)
		{
			d[i] = s[i];
			++i;
		}
	}
	else if (d > s)
	{
		i = n;
		while(i > 0)
		{
			d[i] = s[i];
			i--;
		}
	}
	return (dest);
}

int main(void)
{
	char s[] = {65};
	ft_memmove(s, s, 7);
	return (0);
}
