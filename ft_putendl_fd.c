/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 16:17:20 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/18 18:00:07 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	char *str;
	int i;
	int length;

	str = (char *)s;
	length = ft_strlen((char *) s)

	i = 0;
	while (str[i] != '\0')
	{
		write(fd, &str[i],length);
	}
	return (str[i]);
}
