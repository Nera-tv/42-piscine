/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 08:11:07 by dvilard           #+#    #+#             */
/*   Updated: 2021/08/25 08:11:11 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*dest;
	int	i;

	dest = malloc(length * sizeof(int));
	if (length < 1 || !dest)
		return (0);
	i = -1;
	while (++i < length)
		dest[i] = f(tab[i]);
	return (dest);
}
