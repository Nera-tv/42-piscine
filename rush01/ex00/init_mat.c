/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_mat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdaumas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 15:42:15 by fdaumas           #+#    #+#             */
/*   Updated: 2021/08/14 21:49:05 by fdaumas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void afficheMatrix(char **matrix);


char **init_mat(void)
{
	int		index_Y;
	int		index_X;
	char	**matrice;

	index_Y = 0;
	matrice = malloc(4 * sizeof (char*));
	while (index_Y < 4)
	{
		matrice[index_Y] = malloc(4 * sizeof (char));
		index_X = 0;
		while (index_X < 4)
		{
			matrice[index_Y][index_X] = ':';
			index_X++;
		}
		index_Y++;
	}
	return (matrice);
}

