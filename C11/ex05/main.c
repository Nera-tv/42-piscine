/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 08:12:13 by dvilard           #+#    #+#             */
/*   Updated: 2021/08/25 08:12:14 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int	check_arg(char *str)
{
	if (str[0] == '-' || str[0] == '+' || str[0] == '/' || str[0] == '*'
		|| str[0] == '%')
	{
		return (1);
	}
	return (0);
}

void	operation(int nb1, int nb2, char operator)
{
	if (operator == '+')
		ft_putnbr(addition(nb1, nb2));
	if (operator == '-')
		ft_putnbr(substraction(nb1, nb2));
	if (operator == '*')
		ft_putnbr(multiply(nb1, nb2));
	if (operator == '/')
	{
		if (nb2 == 0)
			ft_putstr("Stop : division by zero");
		else
			ft_putnbr(divide(nb1, nb2));
	}
	if (operator == '%')
	{
		if (nb2 == 0)
			ft_putstr("Stop : modulo by zero");
		else
			ft_putnbr(modulo(nb1, nb2));
	}
}

int	main(int argc, char **argv)
{
	int		nb1;
	int		nb2;
	char	operator;

	if (argc != 4)
		return (0);
	if (ft_strlen(argv[2]) != 1)
	{
		ft_putnbr(0);
		ft_putchar('\n');
		return (0);
	}
	if (!check_arg(argv[2]))
	{
		ft_putnbr(0);
		ft_putchar('\n');
		return (0);
	}
	operator = argv[2][0];
	nb1 = ft_atoi(argv[1]);
	nb2 = ft_atoi(argv[3]);
	operation(nb1, nb2, argv[2][0]);
	ft_putchar('\n');
}
