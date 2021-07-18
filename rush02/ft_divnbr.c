/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_divnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 16:12:05 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/21 08:28:37 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_divnbr(char **tab, char *str)
{
	int i;
	int	j;
    int k;
	int strlen;

	strlen = ft_strlen(str);
	i = 0;
    k = 0;
	while (i++ < strlen)
	{
		j = 0;
		if ((strlen - i) > 2)
		{
			tab[k] = (char**)malloc(sizeof(**tab) * 2);
			tab[k][j++] = str[i];
			tab[k++][j] = 0;
		}
		if (!(tab[k] = (char**)malloc(sizeof(**tab) * ((strlen - i) + 1)));
			return (NULL);
		if ((strlen - i) > 2)
			str[i] /= str[i];	
		tab[k][j++] = str[i] / str[i];
		while (j++ < strlen - i)
			tab[k][j] = '0';
		tab[k++][j] = 0;
	}
	tab [k][0] = 0;
	return (tab);
}
