/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permut.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 18:51:03 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/13 20:19:38 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checkline.h"

/*
void	ft_permut(, char *views)
{
	if (ft_check_grid)
		ft_print_solution // a creer
	else
	{
		ft_swap(*grid);
		ft_permut(grid[i]
	}
}
    */

void ft_swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

/*
 
          // l = index 0 (start of string)
          // r = index 15 (end of string)
void permute(char *a, int l, int r)
{
    int i;
   


     while (j < r)
        {
            i = l;
            while (i <= r )
            {
                if (ft_check_grid(char *grid, char *views))
                {
                    ft_print_solution(char *grid);
                    break;
                }
                ft_swap((a+l), (a+i));
                i++;
                permute(a, l+1, r);
                ft_swap((a+l), (a+i));
            }
            j++;
        }
}

 */
                  // size == 16? == n
                 
void    ft_heap_permut(char *grid, int size, int n)
{
    int i;
    
    if (ft_check_grid(char *grid, char *views))
        ft_display_grid(char *grid, 4, 4); // size x, size y?
    
    else
        i = 0;
        while (i < size) // while (i++ < size) ?
        {
            ft_heap_permut(grid, (size - 1), n)
            
            if (size % 2 == 1)
                ft_swap(grid[0], grid [size - 1]);
            else
                ft_swap(grid[i], grid[size - 1]);
            i++;
        }
}
