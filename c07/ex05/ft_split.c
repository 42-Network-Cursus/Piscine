/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 08:23:40 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/25 09:33:47 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_sep(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_strlen(char *str, char *charset)
{
	int i;

	i = 0;
	while (str[i] && (!(ft_is_sep(str[i], charset))))
	{
		i++;
	}
	return (i);
}

int		ft_word_count(char *str, char *charset)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (*str)
	{
		while (*str && ft_is_sep(str[i], charset))
			str++;
		i = ft_strlen(str, charset);
		str += i;
		if (i)
			count++;
	}
	return (count);
}

char	*ft_strdup(char *str, int len)
{
	char	*copy;
	int		i;

	if (!(copy = (char*)malloc(sizeof(copy) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = 0;
	return (copy);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		len;
	int		i;
	int		words;

	words = ft_word_count(str, charset);
	if (!(tab = (char**)malloc(sizeof(tab) * (words + 1))))
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (ft_is_sep(*str, charset))
			str++;
		len = ft_strlen(str, charset);
		if (!(tab[i] = ft_strdup(str, len)))
			return (NULL);
		str += len;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
