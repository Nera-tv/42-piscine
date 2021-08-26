/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 08:11:45 by dvilard           #+#    #+#             */
/*   Updated: 2021/08/25 08:11:48 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int			ft_atoi(char *str);
int			ft_strlen(char *str);
void		ft_putstr(char *str);
void		ft_putchar(char c);
void		ft_putnbr(int nb);
int			addition(int nb1, int nb2);
int			substraction(int nb1, int nb2);
int			multiply(int nb1, int nb2);
int			divide(int nb1, int nb2);
int			modulo(int nb1, int nb2);

#endif
