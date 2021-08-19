/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 14:53:45 by dvilard           #+#    #+#             */
/*   Updated: 2021/08/11 14:54:05 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (((unsigned char) *s1 - (unsigned char) *s2) > 0)
	{
		return (1);
	}
	else if (((unsigned char) *s1 - (unsigned char) *s2) < 0)
	{
		return (-1);
	}
	return (0);
}
