/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve_matrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:28:55 by dvilard           #+#    #+#             */
/*   Updated: 2021/08/15 16:29:00 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	col_resolve_four(char mat[4][4], int arg_y, int arg_x);
char	row_resolve_four(char mat[4][4], int arg_y, int arg_x);
char	col_resolve_one(char mat[4][4], int arg_y, int arg_x);
char	row_resolve_one(char mat[4][4], int arg_y, int arg_x);

char	ft_condition_matrix(char mat[4][4], char *args, int arg_y, int arg_x)
{
	if (args[arg_x + arg_y] == '4' && (arg_x + arg_y) <= 16)
	{
		col_resolve_four(mat, arg_y, arg_x);
		row_resolve_four(mat, arg_y, arg_x);
	}
	if (args[arg_x + arg_y] == '1' && (arg_x + arg_y) <= 16)
	{
		col_resolve_one(mat, arg_y, arg_x);
		row_resolve_one(mat, arg_y, arg_x);
	}
	return (**mat);
}

char	resolve_matrix(char mat[4][4], char *args)
{
    int	arg_x;
    int	arg_y;

    arg_x = 0;
    while (arg_x < 16)
    {
        arg_y = 0;
        while (arg_y < 4)
        {
            ft_condition_matrix(mat, args, arg_y, arg_x);
            arg_y++;
        }
        arg_x += 4;
    }
    return (**mat);
}

char	**resolve_matrix(char **matrix, char *args)
{
	int	arg_x;
	int	arg_y;
	int	pos;

	arg_x = 0;
	arg_y = 0;
	// apply 4321 case if arg = 4
	while (arg_x < 16)
	{
		while (arg_y < 4)
		{
			if (args[arg_x][arg_y] == '4')
				pos = 0;
				while (pos < 4)
				{
					if (arg_x == 0 || arg_x == 4 )
						matrix[pos][arg_y] =  
				}



			j++;
		}
		arg_x += 4;
		arg_y = 0;
	}
}
