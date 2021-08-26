/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arangoni <arangoni@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 17:35:55 by arangoni          #+#    #+#             */
/*   Updated: 2021/08/21 23:27:31 by arangoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include <stdio.h>

static void	dict_thousand_to_max(char ***dict)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	dict[2] = malloc(12 * sizeof(char **));
	while (i < 12)
	{
		j = 0;
		dict[2][i] = malloc(3 * (i + 1) + 2 * sizeof(char));
		dict[2][i][0] = '1';
		while (++j < 3 * (i + 1) + 1)
			dict[2][i][j] = '0';
		dict[2][i][j] = '\0';
		i++;
	}
}

static void	dict_ten_to_hundred(char ***dict)
{
	int	i;

	i = 0;
	dict[1] = malloc(9 * sizeof(char **));
	while (i < 8)
	{
		dict[1][i] = malloc(3 * sizeof(char));
		dict[1][i][0] = i + 2 + '0';
		dict[1][i][1] = '0';
		dict[1][i][2] = '\0';
		i++;
	}
	dict[1][8] = malloc(sizeof(char) * 4);
	dict[1][8][0] = '1';
	dict[1][8][1] = '0';
	dict[1][8][2] = '0';
	dict[1][8][3] = '\0';
}

static char	***gen_dict(void)
{
	int	i;
	char ***dict;

	i = 0;
	dict = malloc(3 * sizeof(char ***));
	dict[0] = malloc(20 * sizeof(char **));
	if (!(dict[0]))
		return (0);
	while (i < 10)
	{
		dict[0][i] = malloc(sizeof(char) * 2);
		dict[0][i][0] = i + '0';
		dict[0][i][1] = '\0';
		i++;
	}
	while (i < 20)
	{
		dict[0][i] = malloc(sizeof(char) * 3);
		dict[0][i][0] = i / 10 + '0';
		dict[0][i][1] = i % 10 + '0';
		dict[0][i][2] = '\0';
		i++;
	}
	return (dict);
}

char ***to_dict(char ***dict, )

int	main(void)
{
	char ***dict;
	int	i;

	dict = 0;
	i = -1;
	dict = gen_dict();
	dict_ten_to_hundred(dict);
	dict_thousand_to_max(dict);
	while (++i < 20)
		printf("%s\n", dict[0][i]);
	i = -1;
	printf("\n");
	while (++i < 8)
		printf("%s\n", dict[1][i]);
	i = -1;
	printf("\n");
	while (++i < 12)
		printf("%s\n", dict[2][i]);
	free(dict);
	printf("\n");
}