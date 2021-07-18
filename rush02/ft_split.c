/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 13:32:29 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/20 14:54:25 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_split(char *str)
{
	char	*cpy;
	int		cpylen;
	int		i;

    cpy = NULL;
	cpylen = ft_splitlen(str);
	if (cpylen == -1)
    {
        ft_error();
        return (cpy);
    }
	cpy = (char*)malloc(sizeof(*cpy) * (cpylen + 1));
	if (cpy == NULL)
		return (NULL);
	cpy = ft_splitcpy(str);
	return (cpy);
}
