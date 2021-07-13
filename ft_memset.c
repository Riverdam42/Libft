/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 16:07:20 by kkawano           #+#    #+#             */
/*   Updated: 2021/07/10 17:17:30 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_memset(void *buf, int ch, size_t n)
{
	unsigned char *ptr = (unsigned char *)buf;
	const unsigned char ch = ch;

	while (n--)
		*ptr++ = ch;
	return buf;
}
