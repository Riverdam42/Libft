/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 20:26:22 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/21 12:33:22 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr (const char *haystack, const char *needle, size_t len)
{
	unsigned int i;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)needle);
	while (i < len)
		i++;
	if (*needle == '\0')
		return (char *)haystack;
	else
		return (char *)needle;
}
