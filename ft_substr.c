/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 16:01:17 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/07 03:29:47 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	if (s == NULL)
		return (NULL);
	else if (ft_strlen(s) - start <= len)
		len = ft_strlen (s) - start;
	else if ((unsigned int)ft_strlen(s) <= start)
		return (ft_strdup(""));
	new_str = (char *)malloc(sizeof(char) * (len) + 1);
	if (new_str == NULL)
		return (NULL);
	ft_strlcpy(new_str, s + start, len + 1);
	return (new_str);
}

// int		main(void)
// {
// 	char *s = ft_substr("42", 0, 0);
// 	printf("1 = %s\n", s);
// }
