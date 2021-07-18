/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 20:32:19 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/06 19:04:33 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(long n)
{
	write(1, &n, 1);
}

int		ft_pwr(int len)
{
	int len_pwr;

	len_pwr = 1;
	while (len > 0)
	{
		len_pwr *= 10;
		len--;
	}
	return (len_pwr);
}

void	ft_putnbr(int nb)
{
	int		len;
	int		swap;
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n == 0)
		ft_putchar('0');
	len = -1;
	swap = n;
	while (swap != 0)
	{
		swap /= 10;
		len++;
	}
	while (len >= 0)
	{
		ft_putchar((n / ft_pwr(len)) + 48);
		n = n % ft_pwr(len);
		len--;
	}
}
