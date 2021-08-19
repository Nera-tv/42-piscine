/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 12:51:40 by dvilard           #+#    #+#             */
/*   Updated: 2021/08/19 12:51:53 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
		return (0);
	max -= min;
	tab = malloc(max * sizeof (int));
	if (!tab)
		return (0);
	i = -1;
	while (++i < max)
		tab[i] = min + i;
	return (tab);
}
