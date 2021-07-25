/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 11:28:11 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/25 12:57:27 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int res;
	int sign;
	int num;

	res = 0;
	sign = 1;
	num = 0;
	while ((str[num] == ' ') || (str[num] == '\t') || (str[num] == '\n') ||
			(str[num] == '\v') || (str[num] == '\r') || (str[num] == '\f'))
		num++;
	while (str[num] != '\0' && ((str[num] == '+') || (str[num] == '-')))
	{
		if (str[num] == '-')
			sign = sign * -1;
		num++;
	}
	while (str[num] != '\0' && ((str[num] >= '0') && (str[num] <= '9')))
	{
		res = res * 10;
		res = res + str[num] - '0';
		num++;
	}
	res = res * sign;
	return ((int)res);
}

#include <stdio.h>

int		main(void)
{
	char str1[] = "  ---+--+1234ab567";
	char str2[] = "123";
	char str3[] = "-123";
	char str4[] = "  -123";
	char str5[] = "12a34";
	char str6[] = "-12-34";
	char str7[] = "+ + +123";
	char str8[] = "a123b";
	char str9[] = "abc";

	printf("%d\n", ft_atoi(str1));
	printf("%d\n", ft_atoi(str2));
	printf("%d\n", ft_atoi(str3));
	printf("%d\n", ft_atoi(str4));
	printf("%d\n", ft_atoi(str5));
	printf("%d\n", ft_atoi(str6));
	printf("%d\n", ft_atoi(str7));
	printf("%d\n", ft_atoi(str8));
	printf("%d\n", ft_atoi(str9));
}
