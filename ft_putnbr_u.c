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

void	ft_putnbr_u(unsigned int n, int *len)
{
	if (n < 10)
		ft_putchar(n + '0', len);
	else
	{
		ft_putnbr_u(n / 10, len);
		ft_putnbr_u(n % 10, len);
	}
}
