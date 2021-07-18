/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkline.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 20:37:19 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/14 20:41:42 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		ft_colup(char *grid, char *views, int nb)
{
	int i;
	int j;
	int k;
	int mem;

	k = 4;
	i = 1;
	j = 1;
	mem = grid[nb];
	while (i < 4)
	{
		if (mem < grid[nb + k])
		{
			j++;
			mem = grid[nb + k];
		}
		i++;
		k += 4;
	}
	if (views[nb] - '0' == j && ft_sum_ten_c(grid, nb))
		return (1);
	else
		return (0);
}

int		ft_coldown(char *grid, char *views, int nb)
{
	int i;
	int j;
	int mem;
	int k;

	k = 8;
	i = 1;
	j = 1;
	mem = grid[nb + k];
	while (i < 4)
	{
		if (mem < grid[nb + (k - 4)])
		{
			j++;
			mem = grid[nb + (k - 4)];
		}
		i++;
		k -= 4;
	}
	if (views[nb] - '0' == j)
		return (1);
	else
		return (0);
}

int		ft_leftrow(char *grid, char *views, int nb)
{
	int i;
	int j;
	int k;
	int mem;

	k = spc_leftrow(nb);
	j = 1;
	i = 1;
	mem = grid[k];
	while (i < 4)
	{
		if (mem < grid[k + 1])
		{
			j++;
			mem = grid[k + 1];
		}
		k += 1;
		i++;
	}
	if (views[nb] - '0' == j && ft_sum_ten_r(grid, nb))
		return (1);
	else
		return (0);
}

int		ft_rightrow(char *grid, char *views, int nb)
{
	int i;
	int j;
	int k;
	int mem;

	k = spc_rightrow(nb);
	j = 1;
	i = 1;
	mem = grid[k];
	while (i < 4)
	{
		if (mem < grid[k - 1])
		{
			j++;
			mem = grid[k - 1];
		}
		k -= 1;
		i++;
	}
	if (views[nb] - '0' == j)
		return (1);
	else
		return (0);
}

int		ft_check_grid(char *grid, char *views)
{
	int i;
	int bulian;

	i = 0;
	bulian = 1;
	while (views[i] != 0 && bulian == 1)
	{
		if (i < 16 && i > 11)
			bulian = ft_rightrow(grid, views, i);
		if (i < 12 && i > 7)
			bulian = ft_leftrow(grid, views, i);
		if (i < 8 && i > 3)
			bulian = ft_coldown(grid, views, i);
		if (i < 4 && i >= 0)
			bulian = ft_colup(grid, views, i);
		i++;
	}
	return (bulian);
}
