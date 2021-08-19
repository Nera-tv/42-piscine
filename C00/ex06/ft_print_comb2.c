/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:09:32 by dvilard           #+#    #+#             */
/*   Updated: 2021/08/05 16:19:32 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	i;
	char	j;

	i = 0;
	j = 1;
	while (i < 99)
	{
		ft_putchar(i / 10 + '0');
		ft_putchar(i % 10 + '0');
		ft_putchar(' ');
		ft_putchar(j / 10 + '0');
		ft_putchar(j % 10 + '0');
		if (i < 98)
		{
			write(1, ", ", 2);
		}
		if (++j > 99)
		{
			j = ++i + 1;
		}
	}
}
