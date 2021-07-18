/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 18:43:42 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/05 19:00:27 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putn(int n)
{
	write(1, &n, 1);
}

int	ft_init_n(int n)
{
    int x[9] = {'0', '1', '2'};
	int i;
	int res;
	int add;
	
	i = 0;
	res = 1;

	while (i < n - 1)
	{
		add = res % 10 + 1;
		
		res = res * 10 + add;
	}
	return (res);
}

void	ft_print_combn(int n)
{

}

