/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 15:31:13 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/25 16:10:25 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_ascending_sorted(int *tab, int lenght, int (*f)(int, int))
{
	int		i;

	i = 0;
	while (i < lenght - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_is_descending_sorted(int *, int lenght, int (*f)(int, int))
{
	int		i;

	i = 0;
	while (i < lenght - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	if (ft_is_ascending_sorted(tab, lenght, f) ||
			ft_is_descending_sorted(tab, lenght, f))
		return (1);
	else
		return (0);
}
