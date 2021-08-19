/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:06:51 by dvilard           #+#    #+#             */
/*   Updated: 2021/08/15 16:21:07 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.>
int		ft_check_argument(char *str);
int		ft_strlen(char *str);
char	*ft_get_col_Row(char *str);
int		ft_get_mat_len(char *str);
void	ft_putchar(char c);
void	ft_print_matrix(char mat[4][4]);
char	resolve_matrix(char mat[4][4], char *args);
char	push_matrix(char mat[4][4], char *args);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	char	mat[4][4];

	write(1, &argc + '0', 0);
	if (argc != 2 || ft_strlen(argv[1]) > 72)
	{
		ft_putstr("Error\n");
		return (1);
	}
	else if (ft_check_argument(argv[1]) == 1)
	{
		ft_putstr("Error\n");
		return (1);
	}
	else
	{
		ft_get_mat_len(argv[1]);
		resolve_matrix(mat, ft_get_col_Row(argv[1]));
		ft_print_matrix(mat);
	}
	return (0);
}
