/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:45:21 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/21 16:53:40 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *src)
{
	int i;

	i = 0;
	while (src[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*strcpy;
	int		i;

	i = 0;
	strcpy = (char*)malloc(sizeof(*strcpy) * (ft_strlen(src) + 1));
	if (strcpy == NULL)
		return (NULL);
	while (src[i] != 0)
	{
		strcpy[i] = src[i];
		i++;
	}
	strcpy[i] = 0;
	return (strcpy);
}
