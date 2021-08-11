/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 16:09:51 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/11 19:39:47 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_itoa(int n)
{
	char *str;
	long keta;

	//場合わけを入れる
	//負の数だった場合は、keta + 2 の領域確保
	keta = n % 10;
	printf("%zu\n", keta);
	str = malloc(sizeof(char) * (keta + 1));
	if (!str)
		return (NULL);
	if (keta == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (keta < 0)
	{
		str[0] = '-';
		keta = keta * -1;
	}
	str = ft_strlen(keta);
	while (keta > 0)
	{
		str = (keta % 10) + '0';
		str--;
	}
	return (str);
}

int	main(void)
{
	printf("%s\n", ft_itoa(123456789));
	return (0);
}
