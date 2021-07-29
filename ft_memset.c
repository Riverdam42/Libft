/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 16:07:20 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/26 12:30:10 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memset(void *buf, int ch, size_t n)
{
	char *p;
	unsigned char c;
	unsigned long i;

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
	char *result;
	char tab[100];
	result = ft_memset(tab, 'A', 0);
	printf("%d\n",result);

	//oid *buf = '0123456789';
	//result = memset((buf+2, '*', 5);
	//printf("本v家 = %s\n", result);
	//printf("\n");
	//result = ft_memset((void *)buf + 2, '*', 5);
	//printf("自作 = %d\n", result);
	//return 0;
}
*/
