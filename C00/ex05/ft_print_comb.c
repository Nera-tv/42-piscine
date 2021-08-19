/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 14:46:20 by dvilard           #+#    #+#             */
/*   Updated: 2021/08/04 17:05:21 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	gg(char t[5])
{
	*t = '0';
	t[1] = '1';
	t[2] = '2';
	t[3] = ',';
	t[4] = ' ';
}

void	ft_print_comb(void)
{
	char	t[5];

	gg(t);
	while (*t < '8')
	{
		if (*t != '7')
		{
			write(1, t, 5);
		}
		else
		{
			write(1, t, 3);
		}
		if (++t[2] > '9')
		{
			if (++t[1] > '8')
			{
				t[1] = ++(*t) + 1;
			}
			t[2] = t[1] + 1;
		}
	}
}