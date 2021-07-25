/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 15:18:35 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/24 13:47:33 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
			return(1);
	else
			return(0);
}

/*
#include <stdio.h>

int main(void)
{
	char a = '$';


	printf("1 = %d\n", ft_isdigit('0'));
	printf("1 = %d\n", ft_isdigit('9'));
	printf("0 = %d\n", ft_isdigit(a));
}
*/
