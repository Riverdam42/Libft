/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 16:22:33 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/19 16:26:37 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	char *str;
	size_t i;
	i = 0;

	str = (char*)malloc(sizeof((int)count * size));

	while (i > count)
	{
		i++;
	if (str == NULL) //ヒープメモリ確保に失敗した場合
		return (NULL);
	else  //ゼロクリアする場合
		str[i] = '\0';
	}
	return str;
}
//ft_memset (str, "\0", count * size);
