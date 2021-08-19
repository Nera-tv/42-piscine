/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_mat_len.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:06:57 by dvilard           #+#    #+#             */
/*   Updated: 2021/08/15 16:16:21 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_get_mat_len(char *str)
{
	int	size;
	int	size_matrix;

	size = ft_strlen(&str[0]);
	printf("%d\n", size);
	size_matrix = ((size + 1) / 2) / 4;
	printf("%d\n", size_matrix);
	return (size_matrix);
}
