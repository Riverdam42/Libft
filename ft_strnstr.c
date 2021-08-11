/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 20:26:22 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/11 19:20:38 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t n;

	n = 0;
	while (needle[n])
		n++;
	if (n == 0)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (haystack[i + j] && needle[j] && i + j < len \
						&& haystack[i + j] == needle[j])
			{
				j++;
			}
			if (!needle[j])
				return((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}

//  #include <stdio.h>

// int		main(void)
// {
// 	char haystack[30] = "aaabcabcd";
// 	char needle[10] = "aabc";
// 	char * empty = (char*)"";

//  	printf("%c\n", ft_strnstr(haystack, needle, -1) == haystack + 1);
//  	printf("%c\n", ft_strnstr(haystack, "c", -1) == haystack + 4);
// 	printf("%c\n", ft_strnstr(haystack, "abcd", 9) == haystack + 5);
// 	printf("NULL = %s\n", ft_strnstr(haystack, "cd", 8));
// }

// int		main(void)
// {
// 	printf("needleが空文字のとき = %s\n",strnstr("kawano", "", 8));
// 	printf("haystackにneedleがないとき = %s\n", ft_strnstr("kawano", "kawooo", 9));
// 	printf("haystackにneedleあるとき(それ以外) = %s\n", ft_strnstr("kawanokoske", "kawano", 15));
// }

