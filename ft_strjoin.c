/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 16:03:26 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/22 20:35:26 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcat(char *dest, char *s2)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		dest[a] = s2[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

char 	*ft_strjoin(char const *s1, char const *s2)
{
	size_t i;
	size_t j;
	size_t total_size;
	char *result;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j])
		j++;
	total_size =  i + j;
	if (!(result = malloc(sizeof(char) * (total_size + 1))))
		return (0);
	*result = 0;
	while (i < total_size)
	{
		ft_strcat(result, (char *)s1 + i);
		if (i < total_size - 1)
		{
			ft_strcat(result, ((char *)s2));
		}
		i++;
	}
	i = ft_strlen(result);
	result[i] = '\0';
	return (result);
}
