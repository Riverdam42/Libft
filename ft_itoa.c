/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 16:09:51 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/12 17:19:15 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_n(size_t n)
{
	int	len;

	len = 0;
	while (n >= 10)
	{
		len++;
		n /= 10;
	}
	return (len + 1);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	keta;
	long	number;

	number = n;
	keta = 0;
	if (n < 0)
	{
		keta += 1;
		number *= -1;
	}
	keta += count_n(number);
	str = malloc(sizeof(char) * (keta + 1));
	if (!str)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	str[keta] = '\0';
	keta -= 1;
	while ((n >= 0 && keta >= 0) || (n < 0 && keta > 0))
	{
		str[keta--] = (number % 10) + '0';
		number /= 10;
	}
	return (str);
}

// #include <limits.h>

// int	main(void)
// {
// 	printf("str = %s\n", ft_itoa(-123456789));
// 	printf("str = %s\n", ft_itoa(123456789));
// 	printf("INT_MAX: str = %s\n", ft_itoa(INT_MAX));
// 	printf("INT_MIN: str = %s\n", ft_itoa(INT_MIN));
// 	return (0);
// }
