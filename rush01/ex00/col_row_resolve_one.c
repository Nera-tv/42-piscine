/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   col_row_resolve_one.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:06:33 by dvilard           #+#    #+#             */
/*   Updated: 2021/08/15 16:10:38 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	col_resolve_one(char mat[4][4], int arg_y, int arg_x)
{
	int	i;
	int	j;

	i = arg_y;
	if ((arg_x + arg_y) <= 3 && (arg_x + arg_y) > -1)
	{
		j = 0;
		mat[j][i] = 4 + '0';
	}
	if ((arg_x + arg_y) <= 7 && (arg_x + arg_y) > 4)
	{
		j = 3;
		mat[j][i] = 4 + '0';
	}
	return (**mat);
}

char	row_resolve_one(char mat[4][4], int arg_y, int arg_x)
{
	int	i;
	int	j;

	j = arg_y;
	if ((arg_x + arg_y) <= 11 && (arg_x + arg_y) > 7)
	{
		i = 0;
		mat[j][i] = 4 + '0';
	}
	if ((arg_x + arg_y) <= 15 && (arg_x + arg_y) > 11)
	{
		i = 3;
		mat[j][i] = 4 + '0';
	}
	return (**mat);
}
