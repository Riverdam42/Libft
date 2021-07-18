/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 16:07:20 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/18 17:59:49 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memset(void *buf, int ch, size_t n)
{
	unsigned char *str = (char *)buf;
	unsigned int i;

	while (i < n)
	{
		str[i] = ch;
		i++;
	}
	return (buf);
}
