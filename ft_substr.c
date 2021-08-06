/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 16:01:17 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/05 23:07:41 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	if (s == NULL)
		return (NULL);
	if (len == 0)
		return "";
	// if ((unsigned int)ft_strlen(s) <= start)
	// 	return (ft_strdup(""));
	len = ft_strlen ((char *)s) - start;
	new_str = (char *)malloc(sizeof(char) * (len) + 1);
	if (new_str == NULL)
		return (NULL);
	ft_strlcpy(new_str, s + start, len + 1);
	return (new_str);
}

int		main(void)
{
	char * s = ft_substr("tripouille", 0, 42000);
	printf("%s\n", s);
}
