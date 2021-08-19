/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 16:34:29 by dvilard           #+#    #+#             */
/*   Updated: 2021/08/06 10:28:21 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	endTab;
	int	startTab;
	int	i;

	endTab = size - 1;
	startTab = 0;
	while (startTab < endTab)
	{
		i = *(tab + startTab);
		*(tab + startTab) = *(tab + endTab);
		*(tab + endTab) = i;
		endTab--;
		startTab++;
	}
}
