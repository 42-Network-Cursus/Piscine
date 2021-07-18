/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid_manip.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrifi-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 19:44:10 by hrifi-la          #+#    #+#             */
/*   Updated: 2021/03/14 21:39:36 by hrifi-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include <unistd.h>

void	ft_set_value(char *arr, int pos_x, int pos_y, char value)
{
	arr[pos_y * 4 + pos_x] = value;
}

char	*ft_generate_grid(char *grid, int size_x, int size_y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < size_y)
	{
		while (j < size_x)
		{
			ft_set_value(grid, j, i, (i + 1));
			j++;
		}
		j = 0;
		i++;
	}
	return (grid);
}

void	ft_display_grid(char *grid, int size_x, int size_y)
{
	int i;
	int j;
	int pos_xy;

	i = 0;
	j = 0;
	while (i < size_y)
	{
		while (j < size_x)
		{
			pos_xy = size_x * i + j;
			ft_putchar(grid[pos_xy] + '0');
			if (j != size_x - 1)
				ft_putchar(' ');
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
}

void	ft_generate_grid_argv(char *tab1, char *tab2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab1[i])
	{
		if (tab1[i] != ' ')
		{
			tab2[j] = tab1[i];
			j++;
		}
		i++;
	}
	tab2[j] = 0;
}

int		ft_check_argv(char *arr)
{
	int i;

	i = 0;
	while (arr[i])
	{
		if (arr[i] < '1' || arr[i] > '4')
			return (0);
		i++;
	}
	return (1);
}
