/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 15:21:32 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/18 18:41:04 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
	if ((c < 'A' || 'z' < c) && (c < 'a' || 'z' < c)
				&& (c < '0' || '9' < c))
			return (0);
	else
			return (1);
}
