/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdere <hdere@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:10:50 by hdere             #+#    #+#             */
/*   Updated: 2025/07/19 19:58:13 by hdere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int check_flags(va_list args, const char format)
{
	if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'u')
		return (ft_putnbr_u(va_arg(args, unsigned int)));
	else if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == '%')
		return (ft_putchar(format));
	else if (format == 'x')
		return (ft_putnbr_base(va_arg(args, unsigned int), format));
	else if (format == 'X')
		return (ft_putnbr_base(va_arg(args, unsigned int), format));
	else if (format == 'p')
		return (ft_print_ptr(va_arg(args, unsigned long)));

	return (0);
}

int ft_printf(const char *format, ...)
{
	va_list args;
	int count;
	int i;

	count = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
		
			count += check_flags(args, format[i + 1]);
			i++;
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
