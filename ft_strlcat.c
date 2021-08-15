/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 11:26:50 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/15 15:25:25 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, unsigned int dstsize)
{
	unsigned int		len1;
	unsigned int		len2;
	unsigned int		i;

	len1 = 0;
	len2 = 0;
	i = 0;
	while (dst[len1])
		len1++;
	while (src[len2])
		len2++;
	if (dstsize <= len1)
		return (dstsize + len2);
	while (len1 + i < dstsize - 1 && src[i])
	{
		dst[len1 + i] = src[i];
		i++;
	}
	dst[len1 + i] = '\0';
	return (len1 + len2);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[10] = "42";
    char str2[] = "Tokyo";
    char str3[10] = "42";
    char str4[] = "Tokyo";
    int a;
    int b;

    printf("%s　and %s\n", str1, str2);
	a = strlcat(str1, str2, 5);
	printf ("%d\n", a);
	printf("本家 = %s\n", str1);
	printf("\n");
    printf("%s and %s\n", str3, str4);
    b = ft_strlcat(str3, str4, 5);
    printf("%d\n", b);
    printf("自作 = %s\n", str3);
    return (0);
}
*/
