/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 11:28:11 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/18 17:53:29 by kkawano          ###   ########.fr       */
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
