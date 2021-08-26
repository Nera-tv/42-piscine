/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dict.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arangoni <arangoni@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 17:32:38 by dvilard           #+#    #+#             */
/*   Updated: 2021/08/21 23:34:05 by arangoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_check_dict(char *dest)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		while (dest[i] != '\n' && dest[i] != '\0')
		{
			while (dest[i] >= '0' && dest[i] <= '9')
				i++;
			while (dest[i] == ' ')
				i++;
			if (dest[i] == ':')
				i++;
			while (dest[i] == ' ')
				i++;
			while (dest[i] > ' ' && dest[i] <= '~')
				i++;
			if (dest[i] != '\n' && dest[i] != '\0')
				return (1);
		}
		while (dest[i] == '\n')
			i++;
	}
	return (0);
}
