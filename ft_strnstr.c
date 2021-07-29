/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 20:26:22 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/27 17:31:52 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
/*
char *ft_strnstr (const char *haystack, const char *needle, size_t len)
{
	size_t n;
	size_t i;
	size_t j;

	n = 0;
	while (needle[n])
		n++;
	if (n == 0)
		return (char *)haystack;
	i = 0;
	j = 0;
	while (i < len)
	{
		i++;
		j++;
	if (needle[i] != haystack[j])
		return (NULL);
	else
		return (char *)needle;
	}
	return (0);
}
*/

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t n;

	n = 0;
	while (needle[n])
		n++;
	if (n == 0)
		return (char *)haystack;
	i = 0;
	while (haystack[i] != '\0' && i <= len)
	{
		j = 0;
		while (needle[j] != '\0' && i + j <= len)
		{
			if (haystack[i + j] == needle[j])
				return (char *)haystack;
			else
				break;
		}
		if (needle[j] != '\0')
			return((char *)haystack + i);
		i++;
	}
	return (NULL);
}
/*
int		main(void)
{
	printf("needleが空文字のとき = %s\n",strnstr("kawano", "", 8));
	printf("haystackにneedleがないとき = %s\n", ft_strnstr("kawano", "kawooo", 9));
	printf("haystackにneedleあるとき(それ以外) = %s\n", ft_strnstr("kawanokoske", "kawano", 15));
}
*/
