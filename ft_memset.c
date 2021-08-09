/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 16:07:20 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/09 15:48:24 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memset(void *buf, int ch, size_t n)
{
	char	*p;
	size_t	i;
	unsigned char	c;

	p = buf;
	c = (unsigned char)ch;
	i = 0;
	while (n)
	{
		p[i] = (char )c;
		i++;
		n--;
	}
	return ((int )buf);
}

/*
#include <stdio.h>

int		main(void)
{
	char	*result;
	char	tab[100];
	result = ft_memset(tab, 'A', 0);
	printf("%d\n",result);

	//oid *buf = '0123456789';
	//result = memset((buf+2, '*', 5);
	//printf("本家 = %s\n", result);
	//printf("\n");
	//result = ft_memset((void *)buf + 2, '*', 5);
	//printf("自作 = %d\n", result);
	//return 0;
}
*/
