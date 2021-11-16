/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:27:07 by kkawano           #+#    #+#             */
/*   Updated: 2021/11/16 17:29:44 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_put_error(char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	write(2, str, len);
	write(2, "\n", 1);
	return (1);
}
