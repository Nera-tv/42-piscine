/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_argument.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:13:57 by dvilard           #+#    #+#             */
/*   Updated: 2021/08/15 16:14:00 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_check_argument(char *str)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	j = i + 1;
	size = ft_strlen(&str[0]);
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] != ' ' && (str[i] < '1' || str[i] > '9'))
			|| ((str[i] >= '1' && str[i] <= '9')
				&& (str[j] >= '1' && str[j] <= '9'))
			|| (((size + 1) / 2) % 4 != 0))
			return (1);
		else
		{
			i++;
			j++;
		}
	}
	return (0);
}
