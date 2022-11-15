/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamou <ahamou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 06:25:57 by ahamou            #+#    #+#             */
/*   Updated: 2022/11/12 19:09:37 by ahamou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nbr, int *size)
{
	if (nbr == -2147483648)
		ft_putstr("-2147483648", size);
	else if (nbr < 0)
	{
		ft_putchar('-', size);
		ft_putnbr(nbr * -1, size);
	}
	else if (nbr >= 0 && nbr <= 9)
		ft_putchar (nbr + 48, size);
	else
	{
		ft_putnbr(nbr / 10, size);
		ft_putnbr(nbr % 10, size);
	}
}
