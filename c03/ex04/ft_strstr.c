/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 21:15:04 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/10 21:15:27 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int start;

	j = 0;
	i = 0;
	if (to_find[i] == 0)
		return (str);
	while (str[j] != '\0')
	{
		i = 0;
		start = j;
		while (str[j] == to_find[i] || to_find[i] == 0)
		{
			if (to_find[i] == '\0')
				return (str + start);
			j++;
			i++;
		}
		if (str[j] != 0)
			j++;
	}
	return (0);
}
