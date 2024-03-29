/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 09:22:43 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/07 10:46:15 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int x;

	x = 1;
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
			x = 0;
		str++;
	}
	return (x);
}
