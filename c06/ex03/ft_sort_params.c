/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 07:13:51 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/24 10:06:18 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort(char **tab, int size)
{
	int		i;
	int		j;
	char	*swap;

	i = 0;
	while (i++ < size)
	{
		j = 1;
		while (++j < size)
		{
			if (ft_strcmp(tab[j - 1], tab[j]) > 0)
			{
				swap = tab[j - 1];
				tab[j - 1] = tab[j];
				tab[j] = swap;
			}
		}
	}
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	ft_sort(argv, argc);
	i = 1;
	while (argc > 1)
	{
		j = 0;
		while (argv[i][j] != 0)
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
		argc--;
	}
	return (0);
}
