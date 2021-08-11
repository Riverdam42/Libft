/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 11:28:11 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/11 19:39:48 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		check_esc(const char *str)
{
	if((*str == ' ') || (*str == '\t') || (*str == '\n') ||
			(*str == '\v') || (*str == '\r') || (*str == '\f'))
		return (1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int result;
	int sign;
	int i;

	result = 0;
	sign = 1;
	i = 0;
	while (*str != '\0' && check_esc(str) == 1)
		str++;
	while (str[i] != '\0' && ((str[i] == '+') || (str[i] == '-')))
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] != '\0' && (('0' <= str[i]) && (str[i] <= '9')))
	{
		result = result * 10;
		result = result + str[i] - '0';
		i++;
	}
	result = result * sign;
	return ((int)result);
}

// #include <stdio.h>

// int		main(void)
// {
// 	char str1[] = "  ---+--+1234ab567";
// 	char str2[] = "123";
// 	char str3[] = "-123";
// 	char str4[] = "  -123";
// 	char str5[] = "12a34";
// 	char str6[] = "-12-34";
// 	char str7[] = "+ + +123";
// 	char str8[] = "a123b";
// 	char str9[] = "abc";

// 	printf("%d\n", ft_atoi(str1));
// 	printf("%d\n", ft_atoi(str2));
// 	printf("%d\n", ft_atoi(str3));
// 	printf("%d\n", ft_atoi(str4));
// 	printf("%d\n", ft_atoi(str5));
// 	printf("%d\n", ft_atoi(str6));
// 	printf("%d\n", ft_atoi(str7));
// 	printf("%d\n", ft_atoi(str8));
// 	printf("%d\n", ft_atoi(str9));
// }

