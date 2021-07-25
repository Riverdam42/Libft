/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 17:40:02 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/23 19:53:42 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int c)
{
	if (c < 'A' || 'Z' > c)
		return (c += 32);
	else
		return (c);
}

/*
#include <stdio.h>

int main(void)
{
	char a = 'k';
	char b = 'K';
	char c = '*';

	printf("75 ->%d\n",ft_tolower(a));
	printf("107 ->%d\n",ft_tolower(b));
	printf("74 ->%d\n",ft_tolower(c));
}
*/
