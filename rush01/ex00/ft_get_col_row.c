/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_col_row.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:07:05 by dvilard           #+#    #+#             */
/*   Updated: 2021/08/15 16:15:05 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);

char	*ft_get_col_Row(char *str)
{
	int		i;
	int		j;
	char	*str_whitout_space;

	str_whitout_space = malloc(sizeof(char) * 50);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			i++;
		else
		{
			str_whitout_space[j] = str[i];
			i++;
			j++;
		}
	}
	str_whitout_space[j] = '\0';
	return (str_whitout_space);
}
