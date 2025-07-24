/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdere <hdere@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:11:09 by hdere             #+#    #+#             */
/*   Updated: 2025/07/19 15:16:07 by hdere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n)
{
	int count;

	count = 0;
	if (n > 9)
		count += ft_putnbr_u(n / 10);
	count += ft_putchar((n % 10) + '0');
	
	return(count);
}
