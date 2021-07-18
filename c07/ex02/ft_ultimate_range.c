/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 14:35:36 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/21 16:54:27 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *arr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = (int*)malloc(sizeof(*arr) * ((max - min) + 1));
	if (arr == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	*range = arr;
	return (i);
}
