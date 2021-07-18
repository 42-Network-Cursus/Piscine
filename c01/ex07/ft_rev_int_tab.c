/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 06:56:08 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/06 07:20:08 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int swap;
	int i;
	int count;

	i = 0;
	count = size;
	while (i < count / 2)
	{
		swap = *tab;
		*tab = *(tab + (size - 1));
		*(tab + (size - 1)) = swap;
		i++;
		size--;
	}
}
