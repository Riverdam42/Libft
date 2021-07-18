/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 13:33:50 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/18 18:00:59 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr (const char *s, int c)
{
	char s = (char *)s;

	while (++s)
	if (*s == c)
		return (char*)s;
	else if (*s == '\0')
		return (NULL);
}
