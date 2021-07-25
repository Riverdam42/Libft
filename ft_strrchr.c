/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 17:41:29 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/25 14:05:51 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	size_t i;

	if (!s || !c)
		return (NULL);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	i = ft_strlen(s);
	while (i-- >= 0)
	{
		if (s[i] == c )
				return (char *)&s[i];
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	const char str[] = "42Tokyo";
	int ch1 = 'T';
	int ch2 = '\0';

	char *result;
	result = strrchr(str, ch1);
	printf("本家 = %s\n", result);
	printf("\n");
	result = ft_strrchr(str, ch1);
	printf("自作 = %s\n", result);

	result = ft_strrchr(str, ch2);
	printf("文字が見つからない時 = %s\n", result);
}
*/
