/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 16:22:33 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/09 16:40:39 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	i;

	str = (void *)malloc(count * size);
	i = 0;
	while (i > count)
	{
		i++;
		if (str == NULL)
			return (NULL);
		else
			str[i] = '\0';
	}
	return (str);
}
