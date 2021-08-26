/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoint_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arangoni <arangoni@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 12:27:08 by arangoni          #+#    #+#             */
/*   Updated: 2021/08/21 21:30:04 by arangoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	n = nb;
	i = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		n *= nb;
		i++;
	}
	return (n);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	i;

	i = 1;
	 while (i < size / 2 + 1)
	{
		swap = tab[i];
		tab[i] = tab[size - i + 1];
		tab[size - i + 1] = swap;
		++i;
	}
}

int	*fill_tab(int *tab, int len_str, char *str)
{
	int	n;
	int	i;

	i = 0;
	n = 0;
	while (len_str - ++i >= 0)
	{
		n = n + (str[len_str - i] - '0') * ft_iterative_power(10, (i - 1) % 3);
		if (i % 3 == 0 || len_str == i)
		{
			tab[(i + 2) / 3] = n;
			n = 0;
		}
	}
	return (tab);
}

int	*ft_atoint_tab(char *str)
{
	int	*tab;
	int	len_str;

	tab = 0;
	len_str = -1;
	while (str[++len_str] != '\0')
	{
		if (str[len_str] < '0' || str[len_str] > '9')
			return (tab);
	}
	tab = malloc(sizeof(int) * ((len_str + 2) / 3 + 1));
	if (!tab)
		return (0);
	tab[0] = (len_str + 2) / 3;
	fill_tab(tab, len_str, str);
	if (tab[0] > 1)
		ft_rev_int_tab(tab, tab[0]);
	return (tab);
}

int	main(void)
{
	int	i;
	int	*tab;

	tab = ft_atoint_tab("1245554564564564564564564564645678");
	i = 1;
	printf("size: %d\n", tab[0]);
	while (i < tab[0] + 1)
		printf("%d\n", tab[i++]);
	free(tab);
}