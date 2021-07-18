/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 07:20:41 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/06 07:36:09 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int swap;
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (*tab > *(tab + 1))
			{
				swap = *(tab + 1);
				*(tab + 1) = *tab;
				*tab = swap;
			}
			tab++;
			j++;
		}
		tab = tab - size;
		i++;
	}
}
