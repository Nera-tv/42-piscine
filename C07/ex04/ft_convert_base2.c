/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 12:48:56 by dvilard           #+#    #+#             */
/*   Updated: 2021/08/19 12:48:58 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	check_base_return(int i)
{
	if (i < 2)
		return (0);
	else
		return (i);
}

int	condition_j(int j)
{
	if (j < 0)
		return (-j);
	else
		return (j);
}

int	condition_j2(int j)
{
	if (j < 0)
		return (1);
	else
		return (0);
}
