/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamou <ahamou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:36:53 by ahamou            #+#    #+#             */
/*   Updated: 2022/11/12 19:58:50 by ahamou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *size);
void	ft_putnbr(int nbr, int *size);
void	ft_putstr(char *s, int *size);
void	ft_puthexa(unsigned long i, char *s, int *size);
void	ft_putunsignednbr(unsigned int nbr, int *size);

#endif