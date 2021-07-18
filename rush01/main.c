/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 10:55:46 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/14 19:25:58 by hrifi-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
//#include "checkline.c"
//#include "ft_permute_grid.c"

/*void	ft_swap(char *a, char *b);
int		ft_check_line(char *grid, char *views);
int		ft_check_grid(char *grid, char *views);
void	ft_print_solution(char *grid);
char	*ft_generate_grid(char *grid);
void	ft_permute_grid(char *grid);
void	ft_set_value(char* arr, int size_x, int pos_x, int pos_y, char value);
void	ft_display_grid(char *grid);*/

void	ft_putchar(char c)
{
	write(1 , &c, 1);
}

void	ft_set_value(char* arr, int size_x, int pos_x, int pos_y, char value)
{
	arr[pos_y*size_x+pos_x] = value;
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
			ft_set_value(grid, size_x, j, i, (i+1));
			j++;
		}
		j=0;
		i++;
	}
	return grid;
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
		j=0;
		i++;
	}
}

char	ft_get_value(char* arr, int size_x, int pos_x, int pos_y)
{
	return arr[pos_y*size_x+pos_x];
}

void    ft_generate_grid_argv(char *tab1, char *tab2)
{
    int i;
    int j;

    i=0;
    j=0;
    while(tab1[i] )
    {
        if(tab1[i] != ' ')
        {
            tab2[j]=tab1[i];
            j++;
        }
        i++;
    }
	tab2[j]=0;
}

void    display_error()
{
    write(1, "Error\n", 6);
}
int    ft_copy_final_grid(char *arr1, char *arr2)
{
    int i;

    i = 0;
    while(i < 16)
    {
        arr2[i]=arr1[i];
        i++;
    }

	return (1);
}

int	ft_check_argv(char *arr)
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

int ft_strlen(char *str)
{
	int c;

	c = 0;
	while(str[c])
		c++;

	return (c);
}

int		main(int argc, char **argv)
{
	int i;
	int size_x;
	int size_y;
    size_x = 4; 	
	size_y = size_x;
	if (ft_strlen(argv[1]) != 31)
	{
		display_error();
		return (0);
	}
	char *grid_argv = malloc(size_x * size_y + 1);
	ft_generate_grid_argv(argv[1], grid_argv);
	
	i = 0;
	if (argc != 2 || ft_strlen(grid_argv) != 16 || ft_check_argv(grid_argv) == 0)
	{	
		display_error();
		return (0);
	}

 	char *grid = malloc(size_x * size_y + 1);
    char *grid_result = malloc(size_x * size_y + 1);
	ft_generate_grid(grid, size_x, size_y);
	if (next_permutation(grid, grid_argv, 0, grid_result))
		ft_display_grid(grid_result, size_x, size_y);
	else
		display_error();
	free(grid);
	free(grid_argv);
	free(grid_result);
	return (0);
}
