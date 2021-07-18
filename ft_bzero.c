/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 16:19:46 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/14 18:51:28 by kkawano       no   ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	char p;
	int i;

	p = (void *)s;
	if (n == 0)
			; //何もしない
	i = 0;
	while (p[i] != '\0' && i < n)
	{
		p = '\0';
		i++;
	}
}
