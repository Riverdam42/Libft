/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 16:01:17 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/17 12:17:43 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new_str;
	unsigned int	s_len;
	size_t			i;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len - start <= len)
		len = s_len - start;
	else if (*s == '\0' || s_len <= start)
		return (ft_strdup(""));
	new_str = (char *)malloc(sizeof(char) * (len) + 1);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		new_str[i] = s[start + i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

// int		main(void)
// {
// 	char *s = ft_substr("42", 0, 0);
// 	printf("1 = %s\n", s);
// }
