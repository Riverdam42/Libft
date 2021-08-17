/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 17:40:02 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/17 18:52:06 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 32);
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

	printf("%c\n",ft_tolower(a));
	printf("%c\n",ft_tolower(b));
	printf("%c\n",ft_tolower(c));
}
*/
