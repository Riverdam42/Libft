/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 11:22:05 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/09 16:01:41 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/*
#include <stdio.h>

int		 main(void)
{
	char    str[] = "kawano";
	char    *s;
	int number;

	s = str;
	number = 0;
	number = ft_strlen(s);
	printf("文字の長さ=%d\n", number);
}
*/
