/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 17:32:51 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/11 11:36:31 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(unsigned char k)
{
	if (k < 10)
	{
		ft_putchar(k / 16 + 48);
		ft_putchar(k % 16 + 48);
	}
	else if (k >= 10)
	{
		if (k / 16 < 10)
			ft_putchar(k / 16 + 48);
		else
			ft_putchar(k / 16 + 87);
		if (k % 16 < 10)
			ft_putchar(k % 16 + 48);
		else
			ft_putchar(k % 16 + 87);
	}
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char k;

	while (*str != '\0')
	{
		k = *str;
		if (*str < 32 || *str > 127)
		{
			ft_putchar('\\');
			ft_puthex(k);
		}
		else
			ft_putchar(*str);
		str++;
	}
}
