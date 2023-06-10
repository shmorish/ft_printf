/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morishitashoto <morishitashoto@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:20:05 by morishitash       #+#    #+#             */
/*   Updated: 2023/06/10 23:55:49 by morishitash      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list *data, const char format)
{
	int	print_len;

	print_len = 0;
	if (format == 'c')
		print_len += ft_putchar(va_arg(*data, int));
	if (format == 's')
		print_len += ft_putstr(va_arg(*data, char *));
	if (format == 'p')
		print_len += ft_putptr(va_arg(*data, uintptr_t));
	if (format == 'd')
		print_len += ft_putnbr(va_arg(*data, int));
	if (format == 'i')
		print_len += ft_putnbr(va_arg(*data, int));
	if (format == 'u')
		print_len += ft_putunbr(va_arg(*data, unsigned int));
	if (format == 'x')
		print_len += ft_lower_puthex(va_arg(*data, unsigned int));
	if (format == 'X')
		print_len += ft_upper_puthex(va_arg(*data, unsigned int));
	if (format == '%')
		print_len += write(STDOUT_FILENO, "%", 1);
	return (print_len);
}
