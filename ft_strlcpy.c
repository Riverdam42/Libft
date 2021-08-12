/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:19:20 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/12 17:48:12 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	if (!dst || !src)
		return (0);
	src_len = ft_strlen(src);
	if (src_len + 1 < dstsize)
		ft_memcpy(dst, src, src_len + 1);
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (src_len);
}

// #include <stdio.h>

// size_t ft_strlcpy (char *dst, const char *src, size_t dstsize)
// {
// 	size_t i;
// 	size_t src_len;

// 	if (!dst || !src)
// 		return (0);
// 	src_len = ft_strlen(src);
// 	i = 0;
// 	while (i < dstsize - 1 && i <= src_len)
// 	{
// 			dst[i] = src[i];
// 			i++;
// 	}
// 	if (dstsize != 0)
// 		dst[i] = '\0';
// 	return (src_len);
// }

// int        main(void)
// {
//     int r = 0;
//     // dstのオーバーフローを防いだ用法
//     printf("strlcpy\n");
//     char s1[] = {"000"};
//     char s2[] = {"111111"};
//     r = strlcpy(s1, s2, sizeof(s1));
//     printf("s1 = %s\nreturn = %d\n", s1, r);

//     //dstsizeをdstの数より小さく指定
//     char s3[] = {"00000"};
//     char s4[] = {"11111"};
//     r = strlcpy(s3, s4, 3);
//     printf("s3 = %s\nreturn = %d\n", s3, r);

//     printf("\nft_strlcpy\n");
//     char fs1[] = {"000"};
//     char fs2[] = {"111111"};
//     r = ft_strlcpy(fs1, fs2, sizeof(fs1));
//     printf("fs1 = %s\nreturn = %d\n", fs1, r);

//     char fs3[] = {"00000"};
//     char fs4[] = {"11111"};
//     r = ft_strlcpy(fs3, fs4, 3);
//     printf("fs3 = %s\nreturn = %d\n", fs3, r);
//     return(0);
// }
