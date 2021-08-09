/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 16:05:41 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/09 16:24:51 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>

int main(void)
{
	char a = 'k';
	char b = '7';
	char c = '!';
	char d = '\0';
	//char e = " ";

	printf("1 = %d\n", ft_isprint(a));
	printf("1 = %d\n", ft_isprint(b));
	printf("1 = %d\n", ft_isprint(c));
	printf("0 = %d\n", ft_isprint(d));
	//printf("0 = %d\n", ft_isalpha(e));
}
*/
