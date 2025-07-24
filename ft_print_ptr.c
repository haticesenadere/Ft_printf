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

int	ft_print_ptr(unsigned long ptr)
{
	int count;  
	count = 0;
	if (!ptr)
	{
		return ft_putstr("(nil)");	
	}
	count += ft_putstr("0x");
	count += ft_putnbr_base(ptr, 'x');
	return (count);
}
