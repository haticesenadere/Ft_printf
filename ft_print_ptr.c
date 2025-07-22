/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdere <hdere@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:46:20 by hdere             #+#    #+#             */
/*   Updated: 2025/07/19 15:57:35 by hdere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putptr(unsigned long n, int *len)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n >= 16)
		ft_putptr(n / 16, len);
	ft_putchar(hex[n % 16], len);
}

void	ft_print_ptr(void *ptr, int *len)
{
	if (!ptr)
	{
		ft_putstr("(nil)", len);
		return ;
	}
	ft_putstr("0x", len);
	ft_putptr((unsigned long)ptr, len);
}
