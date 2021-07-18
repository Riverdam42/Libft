/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 16:18:39 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/18 18:00:16 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr(int nb, int fd)
{
	int b;

	b = 1;
	if (nb < 0)
	{
		b = -1;
		ft_putchar('-', fd);
	}
	if (nb < 10 && nb > -10)
		ft_putchar('0' + nb * b, fd);
	if (nb >= 10 || nb <= -10)
	{
		ft_putnbr(nb / 10 * b, fd);
		ft_putchar(nb % 10 * b + '0', fd);
	}
}
