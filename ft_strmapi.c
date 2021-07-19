/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 16:10:38 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/19 13:00:45 by kkawano          ###   ########.fr       */
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
	while (i++)
	{
		p = (*f)(i, s[i]);
	}
	return (p);
}
