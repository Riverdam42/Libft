/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 16:04:53 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/07 18:25:08 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		have_set(char const *set, char c)
{
	int i;
	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *new_str;
	size_t start;

	start = 0;
	while (have_set(set, s1[start]) == 1)
		start++;
	size_t end;
	end = ft_strlen(s1);
	while (have_set(set, s1[end - 1]) == 1)
		end--;
	new_str = ft_substr(s1, start, end - start);
	return (new_str);
}

// int main(void)
// {
// 	char *new_str;
// 	new_str = ft_strtrim("abcbaseballbbb", "abc");
// 	printf("abcbaseballbbb\n");
// 	printf("%s\n", new_str);
// }

