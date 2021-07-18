/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftspace.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 20:25:41 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/14 20:42:52 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		spc_leftrow(int nb)
{
	int k;

	if (nb == 8)
		k = 0;
	else if (nb == 9)
		k = 4;
	else if (nb == 10)
		k = 8;
	else
		k = 12;
	return (k);
}

int		spc_rightrow(int nb)
{
	int k;

	if (nb == 12)
		k = 3;
	else if (nb == 13)
		k = 7;
	else if (nb == 14)
		k = 11;
	else
		k = 15;
	return (k);
}

int		ft_sum_ten_r(char *grid, int nb)
{
	int i;
	int j;
	int sum;

	sum = 0;
	i = 0;
	j = 0;
	while (nb > 8)
	{
		i = i + 4;
		nb--;
	}
	while (j < 4)
	{
		sum = sum + grid[i];
		i++;
		j++;
	}
	if (sum == 10)
		return (1);
	return (0);
}

int		ft_sum_ten_c(char *grid, int nb)
{
	int j;
	int sum;

	sum = 0;
	j = 0;
	while (j < 4)
	{
		sum = sum + grid[nb];
		nb = nb + 4;
		j++;
	}
	if (sum == 10)
		return (1);
	return (0);
}
