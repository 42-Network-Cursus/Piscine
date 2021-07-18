/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 20:28:34 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/17 16:12:56 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*start;
	unsigned int	nb_stop;

	start = dest;
	nb_stop = 0;
	while (*dest != '\0')
		dest++;
	while (*src != '\0' && nb_stop < nb)
	{
		*dest = *src;
		dest++;
		src++;
		nb_stop++;
	}
	*dest = '\0';
	return (start);
}
