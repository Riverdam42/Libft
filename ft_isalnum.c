/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 15:21:32 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/23 19:53:30 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
	if ((c < 'A' || 'z' < c) && (c < 'a' || 'z' < c)
				&& (c < '0' || '9' < c))
			return (0);
	else
			return (1);
}

/*
#include <stdio.h>

int main(void)
{
	char a = 'k';
	char b = 'K';
	char c = '1';
	char d = '$';
	char e = '\0';

	printf("1 = %d\n", ft_isalnum(a));
	printf("1 = %d\n", ft_isalnum(b));
	printf("1 = %d\n", ft_isalnum(c));
	printf("0 = %d\n", ft_isalnum(d));
	printf("0 = %d\n", ft_isalnum(e));
}
*/
