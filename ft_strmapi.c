/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 16:10:38 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/27 21:01:38 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *p;
	size_t length;
	size_t i;

	if (!s || !f)
		return (NULL);
	length = ft_strlen(s);
	p = malloc((length + 1) * sizeof(char ));
	if (!p)
	{
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
