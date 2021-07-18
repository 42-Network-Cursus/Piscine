/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permuthassan.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 10:12:40 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/14 10:13:30 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "checkline.h"
#include "main.h"
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
// l = index 0 (start of string)
// r = index 15 (end of string)
void permute(char *grid, char *views, int l, int r)
{
    // 1. tableau a permuter
    // 2. les views a reinjecter dans grid
    // 3. debut de la permutation
    // 4. fin de la permutation
    int i;
   //if (ft_check_grid(a, v))
   //     ft_display_grid(a, 4, 4);
   //else if (l == r)
    if (ft_check_grid(grid, views))
    {
        ft_display_grid(grid, 4, 4);
        return;
    }
    
   if(l == r)
   {
       if (ft_check_grid(grid, views))
       {
           ft_display_grid(grid, 4, 4);
           return;
       }
   }
    
   else
   {
       for (i = l; i <= r; i++)
       {
           while (*(grid+l) == *(grid+i))
               i++;
          swap((grid+l), (grid+i));
          permute(grid, views, l+1, r);
          swap((grid+l), (grid+i)); //backtrack
       }
   }
}
