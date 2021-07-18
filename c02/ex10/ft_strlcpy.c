/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 17:19:16 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/10 20:37:18 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lensrc;
	int				n;

	lensrc = 0;
	while (src[lensrc] != 0)
		lensrc++;
	i = 0;
	n = size;
	while (src[i] != '\0' && n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	while (n > 0)
	{
		dest[i] = 0;
		i++;
		n--;
	}
	if (size != 0)
		dest[size - 1] = '\0';
	return (lensrc);
}
