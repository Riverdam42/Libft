/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 11:25:40 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/18 18:03:14 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned	int	num;

	num = 0;
	if (n == 0)
	{
		return (0);
	}
	while (num < n)
	{
		if (s1[num] == s2[num] && s1[num] != '\0' && s2[num] != '\0')
			num++;
		else
			return (s1[num] - s2[num]);
	}
	return (0);
}
