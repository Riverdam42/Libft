/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 11:25:40 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/15 00:22:09 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char		*p1;
	const unsigned char		*p2;
	size_t					i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n)
	{
		if (p1[i] == p2[i] && p1[i] && p2[i])
			i++;
		else
			return (p1[i] - p2[i]);
	}
	if (i == n)
		return (p1[n - 1] - p2[n - 1]);
	return (p1[i] - p2[i]);
}

// #include <stdio.h>

// int		main(void)
// {
// 	char str1[] = "TOKYO";
// 	char str2[] = "TOKYH";
// 	char str3[] = "TO";

// 	ft_strncmp(str1, str1, 5);
// 	printf("%s,%s\n", str1, str1);
// 	printf("%d\n", ft_strncmp(str1, str1, 5));
// 	ft_strncmp(str1, str2, 4);
// 	printf("%s,%s\n", str1, str2);
// 	printf("%d\n", ft_strncmp(str1, str2, 4));
// 	ft_strncmp(str1, str3, 2);
// 	printf("%s,%s\n", str1, str3);
// 	printf("%d\n", ft_strncmp(str1, str3, 2));
// 	return (0);
// }
