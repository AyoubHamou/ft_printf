/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamou <ahamou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 08:49:26 by ahamou            #+#    #+#             */
/*   Updated: 2022/11/12 19:58:47 by ahamou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa(unsigned long i, char *s, int *size)
{
	if (i > 15)
	{
		ft_puthexa(i / 16, s, size);
		ft_putchar(s[i % 16], size);
	}
	else
		ft_putchar(s[i % 16], size);
}
