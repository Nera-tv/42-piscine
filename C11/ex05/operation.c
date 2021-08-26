/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 08:12:21 by dvilard           #+#    #+#             */
/*   Updated: 2021/08/25 08:12:23 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	addition(int nb1, int nb2)
{
	int	res;

	res = nb1 + nb2;
	return (res);
}

int	substraction(int nb1, int nb2)
{
	int	res;

	res = nb1 - nb2;
	return (res);
}

int	multiply(int nb1, int nb2)
{
	int	res;

	res = nb1 * nb2;
	return (res);
}

int	divide(int nb1, int nb2)
{
	int	res;

	res = nb1 / nb2;
	return (res);
}

int	modulo(int nb1, int nb2)
{
	int	res;

	res = nb1 % nb2;
	return (res);
}
