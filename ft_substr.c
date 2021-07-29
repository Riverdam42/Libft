/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 16:01:17 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/26 19:48:28 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;

	len = ft_strlen ((char *)s) - start;
	if(!(result = (char *)malloc(sizeof(char) * (len) + 1)))
		return (NULL);
	ft_strlcpy(result, s + start, len + 1);
	return (result);
}
