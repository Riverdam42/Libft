/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 12:44:54 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/27 21:12:13 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int ch, size_t n)
{
	const unsigned char* p;
	unsigned int i;

	if (!s || !ch)
		return (NULL);
	p = (const void*) s;
	i = 0;
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

/*
#include <stdio.h>

int main(void)
{
	char s[] = {0, 1, 2 ,3 ,4 ,5};
	printf("本家 = %s\n", memchr(s, 2 + 256, 3));
	printf("自作 = %s\n", ft_memchr(s, 2 + 256, 3));
}


int main(void)
{
	char *result;
	result = ft_memchr("kawano", 'w', 6);
	printf("%s\n", result);
	printf("\n");
	result = ft_memchr("kawano", 'j', 6);
	printf("検索文字と一致しないとき　= %s\n", result);
}
*/
