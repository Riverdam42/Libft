/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 16:22:33 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/14 23:20:51 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	i;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	str = (void *)malloc(count * size);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}

// #include <stdio.h>

// int	main()
// {
// 	int	size = 0;
// 	int	a;
// 	char *p1 = ft_calloc(size, 0);
// 	char *p2 = calloc(size, 0);
// 	a = memcmp(p1, p2, 1);
// 	if (!a)
// 		printf("success\n");
// 	printf("\"%p\"\n", p1);
// 	printf("\"%p\"\n", p2);
// }
