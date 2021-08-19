/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:17:28 by dvilard           #+#    #+#             */
/*   Updated: 2021/08/15 16:18:05 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_matrix(char mat[4][4])
{
	int	i;
	int	j;

<<<<<<< HEAD
	i = 0;
	ft_putchar('\n');
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar(mat[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
=======
    i = 0;
    ft_putchar('\n');
    while(i < 4)
    {
        j = 0;
        while(j < 4)
        {
            ft_putchar(mat[i][j] + '0');
            ft_putchar(' ');
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}

void afficheMatrix(char **matrix)
{
    int i;
    int j;

    i = 0;
    ft_putchar('\n');
    while(i < 4)
    {
        j = 0;
        while(j < 4)
        {
            ft_putchar(matrix[i][j]);
            ft_putchar(' ');
            j++;
        }
        ft_putchar('\n');
        i++;
    }
>>>>>>> 9d4e0307c6df0c0b4b6ce2fd25515be07a1f690e
}
