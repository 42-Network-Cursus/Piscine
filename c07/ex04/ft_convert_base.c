/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 07:42:15 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/26 07:41:31 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_check_base(char *base);
int		ft_is_base(char c, char *base);
int		ft_strlen(char *base);

int		ft_conv_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int sign;
	int res;

	if (ft_check_base(base))
		return (0);
	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_is_base(str[i++], base))
	{
		res = res + (ft_conv_base(str[i], base));
		if (ft_is_base(str[i + 1], base))
			res *= ft_strlen(base);
	}
	return (res * sign);
}

int		ft_nbrlen(long n, int lenbase)
{
	int i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
		++i;
	while (n)
	{
		n /= lenbase;
		++i;
	}
	return (i);
}

char	*ft_copynbr_base(int nbr, char *base)
{
	long	n;
	int		size;
	char	*copy;
	int		lenbase;

	n = nbr;
	lenbase = ft_strlen(base);
	size = ft_nbrlen(n, lenbase);
	copy = (char*)malloc(sizeof(copy) * (size + 1));
	copy[size] = 0;
	if (n < 0)
		n = -n;
	while (n)
	{
		copy[--size] = base[n % lenbase];
		n /= lenbase;
	}
	if (nbr < 0)
		copy[0] = '-';
	return (copy);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int tmp;

	if (ft_check_base(base_from) || ft_check_base(base_to))
		return (NULL);
	tmp = ft_atoi_base(nbr, base_from);
	return (ft_copynbr_base(tmp, base_to));
}
