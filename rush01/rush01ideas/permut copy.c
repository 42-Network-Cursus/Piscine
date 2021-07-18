/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permut.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:36:30 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/14 11:45:57 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int 	swap_needed(char arr[], int start, int curr)
{
	int i;

	i = start;
	while (i < curr)
	{
		if (arr[i] == arr[curr])
			return (0);
		i++;
	}
    return (1);
}

void	 swap(char *a , char *b)
{
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

void	 next_permutation(char arr[], int index, int count, int *compteur)
{
	int i;
	int swap_ok;

    if (index >= count)
    {
    	(*compteur)++;
        return;
    }
	i = index;
	while (i < count)
	{
        swap_ok = swap_needed(arr, index, i);
		if (swap_ok)
		{
			swap(&arr[index], &arr[i]);
            next_permutation(arr, index + 1, count, compteur);
            swap(&arr[index], &arr[i]);
		}
		i++;
	}
}

int main()
{
    int valeur=0;
    int *compteur;
    compteur=&valeur;
    char str[] = "1111444422223333\0";
    next_permutation(str, 0, 16, compteur);
    printf("%d", valeur);
}
