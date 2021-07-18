/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 16:14:06 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/21 19:05:04 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(int size, char *sep)
{
	int i;

	i = 0;
	while (sep[i])
		i++;
	if (size > 1)
		return (i * (size - 1));
	else
		return (0);
}

int		ft_strslen(int size, char **strs)
{
	int i;
	int j;

	j = size - 1;
	if (size > 0)
	{
		i = 0;
		while (strs[j][i])
			i++;
		return (i + ft_strslen(j, strs));
	}
	else
		return (0);
}

int		ft_strcat(char *fullstr, char *strs, int i)
{
	int j;

	j = 0;
	while (strs[j])
	{
		fullstr[i] = strs[j];
		i++;
		j++;
	}
	return (i);
}

int		ft_sepcat(char *fullstr, char *sep, int i)
{
	int j;

	j = 0;
	while (sep[j])
	{
		fullstr[i] = sep[j];
		j++;
		i++;
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*fullstr;
	int		full_len;
	int		count;
	int		i;

	i = 0;
	full_len = ft_strslen(size, strs) + ft_strlen(size, sep);
	fullstr = (char*)malloc(sizeof(*fullstr) * (full_len + 1));
	if (size > 0)
		count = ft_strcat(fullstr, strs[i], i);
	i++;
	while (i < size)
	{
		count = ft_sepcat(fullstr, sep, count);
		count = ft_strcat(fullstr, strs[i], count);
		i++;
	}
	fullstr[count] = '\0';
	return (fullstr);
}
