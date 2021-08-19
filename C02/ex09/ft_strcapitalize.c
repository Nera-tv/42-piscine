/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 16:01:23 by dvilard           #+#    #+#             */
/*   Updated: 2021/08/09 15:09:19 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	isFirstLetter(char *str, int i)
{
	if (str[i - 1] < '0' && (str[i] >= 'a' && str[i] <= 'z'))
	{
		return (0);
	}
	else if ((str[i - 1] > '9' && str[i - 1] < 'A')
		&& (str[i] >= 'a' && str[i] <= 'z'))
	{
		return (0);
	}
	else if ((str[i - 1] > 'Z' && str[i - 1] < 'a')
		&& (str[i] >= 'a' && str[i] <= 'z'))
	{
		return (0);
	}
	else if (str[i - 1] > 'z' && (str[i] >= 'a'
			&& str[i] <= 'z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (isFirstLetter(str, i) == 0)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
