/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_mem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrifi-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 20:27:43 by hrifi-la          #+#    #+#             */
/*   Updated: 2021/03/14 21:43:23 by hrifi-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_free_mem(char *arr1, char *arr2, char *arr3)
{
	free(arr1);
	free(arr2);
	free(arr3);
}

void	ft_freeze_mem(char **arr1, char **arr2, char **arr3)
{
	int size_x;
	int size_y;

	size_x = 4;
	size_y = 4;
	*arr1 = malloc(size_x * size_y + 1);
	*arr2 = malloc(size_x * size_y + 1);
	*arr3 = malloc(size_x * size_y + 1);
}
