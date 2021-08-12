/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 17:41:29 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/12 15:24:37 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	ch;

	ch = (unsigned char )c;
	if (c == 0)
		return ((char *)&s[ft_strlen(s)]);
	i = ft_strlen(s);
	while (i >= 0)
	{
		i--;
		if (s[i] == ch)
			return ((char *)&s[i]);
		else if (s[i] == '\0')
			return (NULL);
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	const char str[] = "42Tokyo";
//  	int ch1 = '2';
//  	int ch2 = 'i';

//  	char *result;
//  	result = strrchr(str, ch1);
//  	printf("本家 = %s\n", result);
//  	printf("\n");
//  	result = ft_strrchr(str, ch1);
//  	printf("自作 = %s\n", result);

//  	result = ft_strrchr(str, ch2);
//  	printf("文字が見つからない時 = %s\n", result);
//  }
