/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 19:38:05 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/11 18:42:45 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned const char	*s;
	size_t	i;

	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	if (!dest && !src)
		return (NULL);
	if (n != 0)
	{
		if (d < s)
		{
			i = 0;
			while (i < n)
			{
				d[i] = s[i];
				i++;
			}
		}
		else if (d > s)
		{
			i = n;
			while (i > 0)
			{
				i--;
				d[i] = s[i];
			}
		}
	}
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char s[] = {65, 66, 67, 68, 69, 0, 45};
// 	char s0[] = { 0,  0,  0,  0,  0,  0, 0};

// 	printf("s0 == %s\n", ft_memmove(s0, s, 7));
// 	return (0);
// }

//int	main(void)
// {
// 	char str[10] = "12345678";
// 	char str2[10] = "12345678";

// 	memmove(&str[2], &str[0], 5);
// 	printf("本家 = %s\n", str);
// 	printf("\n");
// 	ft_memmove(&str2[2], &str2[0], 5);
// 	printf("自作 = %s\n", str2);
// }
