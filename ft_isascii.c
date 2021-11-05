/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 16:03:47 by kkawano           #+#    #+#             */
/*   Updated: 2021/11/05 16:27:31 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	else
		return (0);
}

// #include <stdio.h>

// int		main(void)
// {
// 	printf("1 = %d\n", ft_isascii(1));
// 	printf("1 = %d\n", ft_isascii(127));
// 	printf("1 = %d\n", ft_isascii(42));
// 	printf("0 = %d\n", ft_isascii(-3));
// 	printf("0 = %d\n", ft_isascii(128));
// }