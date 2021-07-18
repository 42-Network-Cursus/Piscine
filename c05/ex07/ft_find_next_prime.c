/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 09:11:30 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/24 12:27:39 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int count;

	count = 2;
	if (nb < 2)
		return (0);
	while (count <= 50000 && count < nb)
	{
		if (nb % count == 0)
			return (0);
		count++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int i;

	i = 0;
	if (nb < 2)
		return (2);
	while (!(ft_is_prime(nb)))
		nb++;
	return (nb);
}
