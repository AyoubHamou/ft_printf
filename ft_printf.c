/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamou <ahamou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:28:59 by ahamou            #+#    #+#             */
/*   Updated: 2022/11/14 11:52:10 by ahamou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	printf_type(va_list list, char c, int *size)
{
	if (c == 'c')
		ft_putchar(va_arg(list, int), size);
	else if (c == 's')
		ft_putstr(va_arg(list, char *), size);
	else if (c == 'p')
	{
		ft_putstr("0x", size);
		ft_puthexa(va_arg(list, unsigned long), "0123456789abcdef", size);
	}
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(list, int), size);
	else if (c == 'u')
		ft_putunsignednbr(va_arg(list, unsigned int), size);
	else if (c == 'x')
		ft_puthexa(va_arg(list, unsigned int), "0123456789abcdef", size);
	else if (c == 'X')
		ft_puthexa(va_arg(list, unsigned int), "0123456789ABCDEF", size);
	else if (c == '%')
		ft_putchar('%', size);
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		size;

	va_start(list, str);
	size = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '\0')
				break ;
			printf_type(list, *str, &size);
		}
		else
			ft_putchar(*str, &size);
		str++;
	}
	va_end(list);
	return (size);
}
