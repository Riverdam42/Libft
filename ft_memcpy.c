/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 19:12:40 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/09 15:42:51 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dst);
}

/*
#include <stdio.h>

int main(void)
{
    char *result;
    char str1[10]= "";
    char str2[10] = "";
    result = memcpy(str1, "kosuke", 8);
    printf("本家 = %s\n", result);
    printf("\n");
    result = ft_memcpy(str2, "kosuke", 8);
    printf("自作 = %s\n", result);
}
*/
