/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 16:04:53 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/04 16:05:47 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	//size_t start;
	size_t end;
	char  const *new_str;

	// i = 0;
	// start = 0;
	// while (s1[start])
	// {
	// 	if (s1[start] == set[i])
	// 	{
	// 		printf("%c\n", s1[start]);
	// 		new_str = &s1[start];
	// 	}
	// 	start++;
	// 	i++;
	// }
	i = 0;
	end = ft_strlen(s1);
	while (end >= 0)
	{
		if (s1[end] == set[i])
		{
			end--;
			new_str = &s1[i];
		}
		i++;
	}
	return ((char *)new_str);
}

int main(void)
{
	char const *s1 = "abcbaseballbbb";
	char const *set = "abc";

	ft_strtrim(s1, set);
	return (0);
}
