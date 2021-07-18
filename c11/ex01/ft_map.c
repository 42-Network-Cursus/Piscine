/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 11:56:50 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/25 14:20:00 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*copy;
	int i;

	copy = (int*)malloc(sizeof(copy) * length);
	i = 0;
	while (i < length)
	{
		copy[i] = f(tab[i]);
		i++;
	}
	return (copy);
}
