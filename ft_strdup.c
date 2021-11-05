/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:47:53 by kkawano           #+#    #+#             */
/*   Updated: 2021/11/05 16:23:00 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new_str;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

// #include <stdio.h>

// int main(void)
// {
// 	char *p;
// 	char s1[] = "abcdefg";
// 	p = ft_strdup(s1);
// 	s1[0] = 'z';

// 	printf("%s\n", s1);
// 	printf("%s\n", p);
// }