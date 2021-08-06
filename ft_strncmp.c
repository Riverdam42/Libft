/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 11:25:40 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/06 18:28:17 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n)
	{
		if (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
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

