/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 08:50:00 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/18 14:15:15 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int count;

	count = 1;
	if (nb == 0)
		return (0);
	while (count <= nb / count && nb >= 0)
	{
		if (count * count == nb)
			return (count);
		count++;
	}
	return (0);
}
