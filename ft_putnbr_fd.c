/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 16:18:39 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/09 16:58:44 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	long	b;

	b = 1;
	if (nb < 0)
	{
		b = -1;
		ft_putchar_fd('-', fd);
	}
	if (nb < 10 && nb > -10)
		ft_putchar_fd('0' + nb * b, fd);
	if (nb >= 10 || nb <= -10)
	{
		ft_putnbr_fd(nb / 10 * b, fd);
		ft_putchar_fd(nb % 10 * b + '0', fd);
	}
}
