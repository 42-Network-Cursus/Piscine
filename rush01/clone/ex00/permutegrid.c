/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permutegrid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 20:44:38 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/14 20:45:57 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		swap_needed(char arr[], int start, int curr)
{
	int i;

	i = start;
	while (i < curr)
	{
		if (arr[i] == arr[curr])
			return (0);
		i++;
	}
	return (1);
}

void	swap(char *a, char *b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		next_permutation(char arr[], char views[], int index, char grid[])
{
	static int	solution = 0;
	int			swap_ok;
	int			i;

	if (index >= 16 && ft_check_grid(arr, views))
		solution = ft_copy_final_grid(arr, grid);
	i = index;
	while (i < 16)
	{
		swap_ok = swap_needed(arr, index, i);
		if (swap_ok)
		{
			swap(&arr[index], &arr[i]);
			next_permutation(arr, views, index + 1, grid);
			swap(&arr[index], &arr[i]);
		}
		i++;
	}
	return (solution);
}
