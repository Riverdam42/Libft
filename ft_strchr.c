/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 13:33:50 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/03 22:49:23 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	if (!s || !c)
		return (NULL);

	while (*s != '\0' && *s != c)
	{
		s++;
	}
	if (*s == c)
		return (char *)s;
	else
		return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	const char str[] = "42Tokyo";
	int ch1 = 'T';
	int ch2 = 't';

	char *result;
	result = strchr(str, ch1);
	printf("本家 = %s\n", result);
	printf("\n");
	result = ft_strchr(str, ch1);
	printf("自作 = %s\n", result);

	result = ft_strchr(str, ch2);
	printf("文字が見つからない時 = %s\n", result);
}
*/
