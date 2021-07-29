/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 11:26:50 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/25 16:16:48 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, unsigned int dstsize)
{
	unsigned int		len1;
	unsigned int		len2;
	unsigned int		i;

	len1 = 0;
	len2 = 0;
	i = 0;
	while (dest[len1] != '\0')
		len1++;
	while (src[len2] != '\0')
		len2++;
	if (dstsize <= len1)
		return (dstsize + len2);
	while (i + len1 < dstsize - 1 && src[i] != '\0')
	{
		dest[len1 + i] = src[i];
		i++;
	}
	dest[len1 + i] = '\0';
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
