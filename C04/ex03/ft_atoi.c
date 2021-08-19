/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 13:21:37 by dvilard           #+#    #+#             */
/*   Updated: 2021/08/16 13:21:39 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char str)
{
	if (str == ' ' || str == '\f' || str == '\n'
		|| str == '\r' || str == '\t' || str == '\v')
		return (0);
	else
		return (1);
}

int	ft_isNbr(char str)
{
	if (str >= '0' && str <= '9')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	x;
	int	i;
	int	signe;

	i = 0;
	signe = 1;
	x = 0;
	while (ft_isspace(str[i]) == 0)
		i++;
	while (ft_isNbr(str[i]) == 0)
	{
		if (str[i] == '-')
			signe = signe * -1;
		else if (str[i] == '+')
			signe = signe * 1;
		else
			return (0);
		i++;
	}
	while (ft_isNbr(str[i]) == 1)
	{
		x = (x * 10) + (str[i] - 48);
		i++;
	}
	return (x * signe);
}
