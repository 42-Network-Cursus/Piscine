/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 21:07:38 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/14 21:13:41 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MAIN_H
# define _MAIN_H

void	ft_putchar(char c);
void	ft_set_value(char *arr, int size_x, int pos_x, int pos_y, char value);
char	ft_generate_grid(char *grid, int size_x, int size_y);
void	ft_display_grid(char *grid, int size_x, int size_y);
char	ft_get_value(char *arr, int size_x, int pos_x, int pos_y);
void	ft_generate_grid_argv(char *tab1, char *tab2);
int		ft_copy_final_grid(char *arr1, char *arr2);
int		ft_colup(char *grid, char *views, int nb);
int		ft_coldown(char *grid, char *views, int nb);
int		ft_leftrow(char *grid, char *views, int nb);
int		ft_rightrow(char *grid, char *views, int nb);
int		ft_check_grid(char *grid, char *views);
int		swap_needed(char arr[], int start, int curr);
void	swap(char *a, char *b);
int		next_permutation(char arr[], char views[], int index, char grid[]);
int		ft_sum_ten_c(char *grid, int nb);
int		ft_sum_ten_r(char *grid, int nb);
int		ft_check_argv(char *arr);
void	ft_free_mem(char *arr1, char *arr2, char *arr3);
void	ft_freeze_mem(char *arr1, char *arr2, char *arr3);
int		spc_leftrow(int nb);
int		spc_rightrow(int nb);

#endif
