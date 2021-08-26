/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_clone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 17:32:49 by dvilard           #+#    #+#             */
/*   Updated: 2021/08/21 17:32:52 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char	*ft_file_clone(char *path, int file_len)
{
	char	buf[BUF_SIZE + 1];
	char	*dest;
	int		i;
	int		file;

	file = open(path, O_RDONLY);
	if (file == 0)
		return ("1");
	read(file, buf, BUF_SIZE);
	dest = malloc(file_len * sizeof(char));
	if (!dest)
		return (dest);
	i = 0;
	dest[i++] = buf[0];
	while (read(file, buf, BUF_SIZE) != 0)
		dest[i++] = buf[0];
	dest[i] = '\0';
	close(file);
	return (dest);
}
