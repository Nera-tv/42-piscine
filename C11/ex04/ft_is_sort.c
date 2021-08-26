/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 08:11:32 by dvilard           #+#    #+#             */
/*   Updated: 2021/08/25 08:11:34 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	v;
	int	v2;

	i = 0;
	v = f(tab[i], tab[i + 1]);
	while (i < length && !v)
	{
		v = f(tab[i], tab[i + 1]);
		i++;
	}
	while (i < length)
	{
		v2 = f(tab[i], tab[i + 1]);
		if ((v2 < 0 && v > 0) || (v2 > 0 && v < 0))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int	test_sort(int a, int b)
{
	return (a - b);
}

int	main()
{
	int tab[] = {1, 2, 3, 4, 5, 6};
	int (*ptr)(int, int);

	ptr = &test_sort;

	printf("%d\n", ft_is_sort(tab, 6, ptr));
}
