/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 14:28:44 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/20 14:49:09 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_splitcpy(char *str)
{
	int		i;
	int		j;
	char	*cpy;

	i = 0;
	while (str[i])
	{
		while (str[i] < '0' || str[i] > '9')
			i++;
		j = 0;
		while (str[i] >= '0' && str[i] <= '9')
		{
			cpy[j] = str[i];
			i++;
			j++;
		}
		break;
	}
	return (cpy);
}