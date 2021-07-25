/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 16:04:53 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/22 17:11:22 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;
	char  const *new_str;

	i = 0;
	j = 0;
	new_str = NULL;
	while (set[j])
	{
		if (s1[i] == set[j])
		{
			i++;
			new_str = &s1[i];
		}
		j++;
	}
	return ((char *)new_str);
}
