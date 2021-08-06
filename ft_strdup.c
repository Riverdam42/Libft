/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:47:53 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/06 23:05:32 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char		*ft_strdup(char *src)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!result)
		return (0);
	result = ft_strcpy(result, src);
	return (result);
}

/*
#include <stdio.h>
int main(void)
{
	char *p;
	char result[] = "abcdefg";
	p = ft_strdup(result);
	result[0] = 'z';

	printf("%s\n", result);
	printf("%s\n", p);

}
*/
