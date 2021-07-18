/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permutall.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 08:34:49 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/14 08:44:39 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "checkline.h"
#include "main.h"
// n = array size
void ft_permutall(char *grid, char *views, int n)
{
	int i;
	int j;
	int temp;

    if (ft_check_grid(grid, views))
    {
        ft_display_grid(grid, 4, 4);
        return ;
    }
	j = 1;
	while (j <= n)
	{
		i = 0;
		while (i < n - 1)
		{
            if (ft_check_grid(grid, views))
            {
                ft_display_grid(grid, 4, 4);
                return ;
            }
            else
            {
                if (grid[i] == grid[i=1])
                    i++;
                temp = grid[i];
                grid[i] = grid[i+1];
                grid[i+1] = temp;
                i++;
            }
		}
		j++;
	}
}
