/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 11:26:50 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/18 18:02:33 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		len1;
	unsigned int		len2;
	unsigned int		index;

	len1 = 0;
	len2 = 0;
	index = 0;
	while (dest[len1] != '\0')
		len1++;
	while (src[len2] != '\0')
		len2++;
	if (size <= len1)
		return (size + len2);
	while (index + len1 < size - 1 && src[index] != '\0')
	{
		dest[len1 + index] = src[index];
		index++;
	}
	dest[len1 + index] = '\0';
	return (len1 + len2);
}
