/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:57:22 by dvilard           #+#    #+#             */
/*   Updated: 2021/08/17 14:57:24 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	limit;
	int	i;

	i = 1;
	if (nb <= 1)
		return (0);
	if (nb < 4)
		return (1);
	if (nb < 10000)
		limit = nb / 2;
	else
		limit = nb / 100;
	while (i++ < limit)
	{
		if (nb % i == 0)
			return (0);
	}
	return (1);
}
