/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 10:55:46 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/13 16:55:39 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_swap(char *a, char *b);
int		ft_check_line(char *grid, char *views);
int		ft_check_grid(char *grid, char *views);
void	ft_print_solution(char *grid);
char	*ft_generate_grid(char *grid);
void	ft_permute_grid(char *grid);
void	ft_set_value;

int		ft_check_line(char *grid, char *views)
{
	int i;
	int j;


	i = 0;
	j = 0;
	if (i < 4)
	{
		if 
		i++;
	}
	else if (i < 8)
	{
	
	}
	else if (i < 12)
	{
	}
	else
	{
	}
}

int 	colup(char *grid,char *views, int nb)
{
	int i;
	int j;
	int k;

	k = 4;
	i = 1;
	j = 1;
	while (i < 4)
	{
		if (grid[nb] < grid[nb + k])
			j++;
		i++;
		k += 4;
	}
	if (views[nb] == j)
		return (1);
	else
		return (0);
}

int 	coldown(char *grid,char *views, int nb)
{
	int i;
	int j;

	k = 8;
	i = 1;
	j = 1;
	while (i < 4)
	{
		if (grid[nb + k] < grid[nb + (k - 4)])
			j++;
		i++;
		k -= 4;
	}
	if (views[nb] == j)
		return (1);
	else
		return (0);
}

int leftrow(char *grid, char *views, int nb)
{
	int i;
	int j;
	int k;

	if (nb == 8)
		k = 0;
	else if (nb == 9)
		k = 4;
	else if (nb == 10)
		k = 8;
	else
		k = 12;
	
	j = 1;
	i = 1;
	while (i < 4)
	{
		if (grid[k] < grid [k + 1])
			j++;
		i++;
		k += 1;
	}
	if (views[nb] == j)
		return (1);
	else
		return (0);
}

int leftrow(char *grid, char *views, int nb)
{
	int i;
	int j;
	int k;

	if (nb == 12)
		k = 3;
	else if (nb == 13)
		k = 7;
	else if (nb == 14)
		k = 11;
	else
		k = 15;
	
	j = 1;
	i = 1;
	while (i < 4)
	{
		if (grid[k] < grid [k - 1])
			j++;
		i++;
		k -= 1;
	}
	if (views[nb] == j)
		return (1);
	else
		return (0);
}


int main(int argc, char **argv)
{
	int 	i;
	char 	x;
	char 	y;

	i = 0;
	if (argc != 1)
		return (0); // return ERROR here
	while (*(argv[1]+i) != 0)
		i++;
	if (i != 16)
		return (0); // accept only grid of 4x4 
	char *grid = malloc(char x * char y);
	

		
}
