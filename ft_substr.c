/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 16:01:17 by kkawano           #+#    #+#             */
/*   Updated: 2021/11/05 16:26:22 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	unsigned int	s_len;
	size_t			i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len - start <= len)
		len = s_len - start;
	else if (*s == '\0' || s_len <= start)
		return (ft_strdup(""));
	p = (char *)malloc(sizeof(char) * (len) + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

// #include <stdio.h>

// int		main(void)
// {
// 	char *s = ft_substr("42", 0, 0);
// 	printf("1 = %s\n", s);
// }
