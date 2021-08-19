/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   col_row_resolve_four.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:06:46 by dvilard           #+#    #+#             */
/*   Updated: 2021/08/15 16:09:52 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	col_resolve_four(char mat[4][4], int arg_y, int arg_x)
{
	int	i;
	int	j;

	i = arg_y;
	if ((arg_x + arg_y) <= 3 && (arg_x + arg_y) > -1)
	{
		j = 0;
		while (j != 4)
		{
			mat[j][i] = (j + 1) + '0';
			j++;
		}
	}
	if ((arg_x + arg_y) <= 7 && (arg_x + arg_y) > 4)
	{
		j = 3;
		while (j != -1)
		{
			mat[j][i] = (4 - j) + '0';
			j--;
		}
	}
	return (**mat);
}

char	row_resolve_four(char mat[4][4], int arg_y, int arg_x)
{
	int	i;
	int	j;

	j = arg_y;
	if ((arg_x + arg_y) <= 11 && (arg_x + arg_y) > 7)
	{
		i = 0;
		while (i != 4)
		{
			mat[j][i] = (i + 1) + '0';
			i++;
		}
	}
	if ((arg_x + arg_y) <= 15 && (arg_x + arg_y) > 11)
	{
		i = 3;
		while (i != -1)
		{
			mat[j][i] = (4 - i) + '0';
			i--;
		}
	}
	return (**mat);
}
