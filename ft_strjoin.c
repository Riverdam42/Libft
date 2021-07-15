/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 16:03:26 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/14 14:53:05 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int			ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

int			total_size(int size, char **strs, char *sep)
{
	int	num;
	int	total;

	num = 0;
	total = 0;
	while (num < size)
	{
		total += ft_strlen(strs[num]);
		num++;
	}
	total = total + (ft_strlen(sep) * (size - 1)) + 1;
	return (total);
}

char		*ft_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

void		*ft_strjoin(int size, char **strs, char *sep)
{
	int		num;
	char	*result;

	if (size == 0)
	{
		result = malloc(0);
		*result = 0;
		return (result);
	}
	if (!(result = malloc(sizeof(char) * total_size(size, strs, sep))))
		return (0);
	*result = 0;
	num = 0;
	while (num < size)
	{
		ft_strcat(result, strs[num]);
		if (num < size - 1)
		{
			ft_strcat(result, sep);
		}
		num++;
	}
	result[ft_strlen(result)] = '\0';
	return (result);
}
