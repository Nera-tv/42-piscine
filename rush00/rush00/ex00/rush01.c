/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 15:46:03 by dvilard           #+#    #+#             */
/*   Updated: 2021/08/07 16:33:48 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int x, int y, int nbL, int nbC)
{
	if ((nbL > 0 && nbL < x - 1) && (nbC > 0 && nbC < y - 1))
	{
		ft_putchar(' ');
	}
	else
	{
		if ((nbL == 0 && nbC == 0) || ((nbL == x - 1 && nbC == y - 1)
				&& (y != 1 && x != 1)))
		{
			ft_putchar('/');
		}
		else if ((nbL == 0 && nbC == y - 1) || (nbL == x - 1 && nbC == 0))
		{
			ft_putchar('\\');
		}
		else
			ft_putchar('*');
	}
}

void	rush(int x, int y)
{
	int		nbL;
	int		nbC;

	nbC = 0;
	while (nbC < y)
	{
		nbL = 0;
		while (nbL < x)
		{
			ft_print(x, y, nbL, nbC);
			nbL++;
		}
		ft_putchar('\n');
		nbC++;
	}
}