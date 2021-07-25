/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 16:10:38 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/20 21:07:54 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *p;
	int length;
	unsigned int i;

	length = ft_strlen((char *)s);
	p = (char *)malloc(sizeof(length + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (p[i] != 0)
	{
		p[i] = f(i, (s[i]));
	}
	return (p);
}
