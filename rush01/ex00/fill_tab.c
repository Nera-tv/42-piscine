/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:12:29 by dvilard           #+#    #+#             */
/*   Updated: 2021/08/15 16:12:31 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*tmp;

	tmp = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;
	return (tmp);
}

char	fill_tab_1(char tab1[6][4])
{
	ft_strcpy(tab1[0], "4321");
	ft_strcpy(tab1[1], "4231");
	ft_strcpy(tab1[2], "4132");
	ft_strcpy(tab1[3], "4312");
	ft_strcpy(tab1[4], "4123");
	ft_strcpy(tab1[5], "4213");
	return (**tab1);
}

char	fill_tab_2(char tab2[11][4])
{
	ft_strcpy(tab2[0], "3412");
	ft_strcpy(tab2[1], "3421");
	ft_strcpy(tab2[2], "3142");
	ft_strcpy(tab2[3], "3241");
	ft_strcpy(tab2[4], "3214");
	ft_strcpy(tab2[5], "3124");
	ft_strcpy(tab2[0], "2413");
	ft_strcpy(tab2[1], "2431");
	ft_strcpy(tab2[2], "2143");
	ft_strcpy(tab2[3], "1423");
	ft_strcpy(tab2[4], "1432");
	return (**tab2);
}

char	fill_tab_3(char tab3[6][4])
{
	ft_strcpy(tab3[0], "2341");
	ft_strcpy(tab3[1], "2134");
	ft_strcpy(tab3[2], "2314");
	ft_strcpy(tab3[3], "1243");
	ft_strcpy(tab3[4], "1342");
	ft_strcpy(tab3[5], "1324");
	return (**tab3);
}
