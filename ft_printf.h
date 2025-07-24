/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdere <hdere@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:11:36 by hdere             #+#    #+#             */
/*   Updated: 2025/07/19 20:46:10 by hdere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int     ft_putnbr(int n);
int 	ft_putnbr_u(unsigned int n);
int 	ft_putchar(int c);
int 	ft_putstr(char *s);
int 	ft_putnbr_base(unsigned long nbr, char Xx);
int 	ft_print_ptr(unsigned long ptr);

#endif
