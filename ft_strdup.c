/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:47:53 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/09 17:03:25 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*result;
	size_t	i;

	result = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	result[i] = '\0';
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
