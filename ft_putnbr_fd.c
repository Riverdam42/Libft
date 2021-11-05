/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 16:18:39 by kkawano           #+#    #+#             */
/*   Updated: 2021/11/05 16:37:10 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb, int fd)
{
	int	sign;

	sign = 1;
	if (nb < 0)
	{
		sign = -1;
		ft_putchar('-');
	}
	if (nb <= -10 || 10 <= nb)
	{
		ft_putnbr(nb / 10 * sign, fd);
	}
	ft_putchar_fd(nb % 10 * sign + '0', fd);
}
