/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 19:38:05 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/09 16:00:48 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	const char	*s;
	size_t	i;

	d = (char *)dest;
	s = (const char *)src;
	if (!dest && !src)
		return (NULL);
	if (n != 0)
	{
		if (d < s)
		{
			i = 0;
			while (++i < n)
				d[i] = s[i];
		}
		else if (d > s)
		{
			i = n;
			while (i-- > 0)
				d[i] = s[i];
		}
	}
	return (dest);
}

//#include <stdio.h>

//int	main(void)
//{
//	char str[10] = "12345678";
//	char str2[10] = "12345678";

//	memmove(&str[2], &str[0], 5);
//	printf("本家 = %s\n", str);
//	printf("\n");
//	ft_memmove(&str2[2], &str2[0], 5);
//	printf("自作 = %s\n", str2);
//}
