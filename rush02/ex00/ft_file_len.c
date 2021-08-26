/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 17:32:57 by dvilard           #+#    #+#             */
/*   Updated: 2021/08/21 17:32:59 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_file_len(char *path)
{
	char	buf[BUF_SIZE];
	int		i;
	int		file;

	file = open(path, O_RDONLY);
	i = 0;
	if (file == 0)
		return (1);
	while (read(file, buf, BUF_SIZE) != 0)
		i++;
	close(file);
	return (i + 1);
}
