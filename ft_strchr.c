/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 13:33:50 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/16 18:36:33 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;

	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char )c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	const char str[] = "42Tokyo";
// 	int ch1 = 'T';
// 	int ch2 = 't';

// 	char *result;
// 	result = strchr(str, ch1);
// 	printf("本家 = %s\n", result);
// 	printf("\n");
// 	result = ft_strchr(str, ch1);
// 	printf("自作 = %s\n", result);

// 	result = ft_strchr(str, ch2);
// 	printf("文字が見つからない時 = %s\n", result);
// }
