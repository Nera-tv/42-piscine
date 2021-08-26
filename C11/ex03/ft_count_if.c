/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 08:11:24 by dvilard           #+#    #+#             */
/*   Updated: 2021/08/25 08:11:26 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < length)
	{
		if (f(tab[i++]))
			j++;
	}
	return (j);
}