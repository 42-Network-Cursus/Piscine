/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrifi-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 20:08:32 by hrifi-la          #+#    #+#             */
/*   Updated: 2021/03/14 21:32:30 by hrifi-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	display_error(void)
{
	write(1, "Error\n", 6);
}

int		ft_copy_final_grid(char *arr1, char *arr2)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		arr2[i] = arr1[i];
		i++;
	}
	return (1);
}

int		ft_len(char *str)
{
	int c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*grid_argv;
	char	*grid;
	char	*grid_result;

	if (ft_len(argv[1]) != 31)
	{
		display_error();
		return (0);
	}
	ft_freeze_mem(&grid_argv, &grid, &grid_result);
	ft_generate_grid_argv(argv[1], grid_argv);
	i = 0;
	if (argc != 2 || ft_len(grid_argv) != 16 || ft_check_argv(grid_argv) == 0)
	{
		display_error();
		return (0);
	}
	ft_generate_grid(grid, 4, 4);
	if (next_permutation(grid, grid_argv, 0, grid_result))
		ft_display_grid(grid_result, 4, 4);
	else
		display_error();
	ft_free_mem(grid, grid_argv, grid_result);
	return (0);
}
