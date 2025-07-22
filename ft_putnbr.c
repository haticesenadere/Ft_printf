/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdere <hdere@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:11:14 by hdere             #+#    #+#             */
/*   Updated: 2025/07/21 16:29:15 by hdere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *len)
{
	unsigned int	nb;

	nb = n;
	// if (n < 0)
	// {
	// 	ft_putchar('-', len);
	// 	nb *= -1;
	// }
	if (nb < 10)
		ft_putchar(nb + '0', len);
	else
	{
		ft_putnbr(nb / 10, len);
		ft_putnbr(nb % 10, len);
	}
}
