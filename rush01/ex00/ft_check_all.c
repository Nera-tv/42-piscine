/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleveil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 13:51:40 by aleveil           #+#    #+#             */
/*   Updated: 2021/08/15 16:02:33 by aleveil          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_view(char *args, int x_args, int y_args, char **matrix)
{
	int	higher_nb;
	int	i;
	int	view;

	i = 0;
	higher_nb = 0;
	view = 0;
	while (i < 4)
	{
		if (x_args == 0 || x_args == 4)
		{
			if (matrix[i][y_args] - '0' > higher_nb)
			{
				view++;
				higher_nb = matrix[i][y_args] - '0';
			}
		}
		else if (x_args == 8 || x_args == 12)
		{
			if (matrix[y_args][i] - '0' > higher_nb)
			{
				view++;
				higher_nb = matrix[y_args][i] - '0';
			}
		}
		if (x_args == 0 || x_args == 8)
			i++;
		else if (x_args == 4 || x_args == 12)
			i--;
	}
	if (view != (args[x_args + y_args] - '0'))
		return (1);
	return (0);
}

int	ft_check_all(char **matrix, char *args)
{
	int	x_args;
	int	y_args;
	int x_mat;
	int	y_mat;

	x_args = 0;
	y_args = 0;
	while (x_args < 16)
	{
		while (y_args < 4)
		{
			if(ft_check_view(args, x_args, y_args, matrix))
				return (1);
			y_args++;
		}
		y_args = 0;
		x_args += 4;
	}
	return (0);
}
