/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 12:21:33 by kkawano           #+#    #+#             */
/*   Updated: 2021/11/05 16:27:19 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	else
		return (0);
}

// #include <stdio.h>

// int main(void)
// {
// 	char a = 'k';
// 	char b = 'K';
// 	char c = '1';
// 	char d = '$';
// 	char e = '\0';

// 	printf("1 = %d\n", ft_isalpha(a));
// 	printf("1 = %d\n", ft_isalpha(b));
// 	printf("0 = %d\n", ft_isalpha(c));
// 	printf("0 = %d\n", ft_isalpha(d));
// 	printf("0 = %d\n", ft_isalpha(e));
// }