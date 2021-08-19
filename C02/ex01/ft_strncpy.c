/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 13:20:43 by dvilard           #+#    #+#             */
/*   Updated: 2021/08/10 11:03:28 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	*ft_memset(void *ptr, int c, unsigned int len)
{
	unsigned char	*ptr_char;

	ptr_char = ptr;
	while (len > 0)
	{
		*ptr_char = c;
		ptr_char++;
		len--;
	}
	return (ptr_char);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*res;
	unsigned int	i;
	unsigned int	src_len;

	res = dest;
	i = 0;
	src_len = ft_strlen(src);
	if (src_len < n)
	{
		ft_memset(dest + src_len, '\0', n - src_len);
		n = src_len;
	}
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (res);
}
