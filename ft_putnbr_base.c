/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdere <hdere@student.42istanbul.com.t      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:45:14 by hdere             #+#    #+#             */
/*   Updated: 2025/07/19 15:51:23 by hdere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long nbr, char Xx)
{
	unsigned int	base_len;
	char			*base;
	int		count;

	count = 0;
	base_len = 16;
	if (Xx == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nbr >= base_len)
		count += ft_putnbr_base(nbr / base_len, Xx);
	count += ft_putchar(base[nbr %  base_len]);

	return (count);
}
