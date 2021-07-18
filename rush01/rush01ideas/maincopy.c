/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 10:55:46 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/13 17:37:12 by hrifi-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "checkline.h"
#include "permuthassan.h"

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

int		main()   //main(int argc, char **argv)
{
   
    char grid[16]= "1234234134124123";
    char views[16] = "4321122243211222";
    /*
	int i;

	i = 0;
	if (argc != 1)
		return (0); // return ERROR here
	while (*(argv[1]+i) != 0)
		i++;
	if (i != 16)
		return (0); // accept only grid of 4x4 
	*/
/*
	int size_x;
	int size_y;
	
	size_x = 4; // or size_x = 5,6,..,9
	size_y = 4;
	char *grid = malloc(size_x * size_y);

    ft_generate_grid(grid, size_x, size_y);
    */
    permute(grid, views, 0, 15);
	
	return (0);
}
