/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignednbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamou <ahamou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 06:48:54 by ahamou            #+#    #+#             */
/*   Updated: 2022/11/12 18:18:23 by ahamou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsignednbr(unsigned int nbr, int *size)
{
	if (nbr >= 0 && nbr <= 9)
		ft_putchar(nbr + 48, size);
	else
	{
		ft_putunsignednbr(nbr / 10, size);
		ft_putunsignednbr(nbr % 10, size);
	}
}
