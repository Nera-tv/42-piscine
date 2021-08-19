/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 12:48:26 by dvilard           #+#    #+#             */
/*   Updated: 2021/08/19 12:48:29 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	check_base_return(int i);
int	condition_j(int j);
int	condition_j2(int j);

int	ft_in_base(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
		if (c == base[i])
			return (i);
	return (-1);
}

int	ft_check_base(char *base)
{
	int	i;

	i = -1;
	while (base[++i])
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| ft_in_base(base[i], base + i + 1) >= 0
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
	return (check_base_return(i));
}

int	ft_atoi_base(char *str, char *base, int size)
{
	int	i;
	int	n;
	int	signe;

	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	signe = 1;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			signe *= -1;
	n = 0;
	i = ft_in_base(*str++, base);
	while (i >= 0)
		n = n * size + i;
	return (n * signe);
}

int	ft_nbrlen(unsigned int n, unsigned int base_size)
{
	if (n < base_size)
		return (1);
	return (1 + ft_nbrlen(n / base_size, base_size));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char			*dest;
	unsigned int	nb;
	int				size;
	int				i;
	int				j;

	j = ft_check_base(base_from);
	size = ft_check_base(base_to);
	if (!(j && size))
		return (0);
	j = ft_atoi_base(nbr, base_from, j);
	nb = condition_j(j);
	i = ft_nbrlen(nb, size) + (condition_j2(j));
	dest = malloc((i + 1) * sizeof(char));
	if (!(dest))
		return (0);
	dest[i] = '\0';
	while (i--)
	{
		dest[i] = base_to[nb % size];
		nb /= size;
	}
	if (j < 0)
		dest[0] = '-';
	return (dest);
}
