/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morishitashoto <morishitashoto@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 14:03:09 by morishitash       #+#    #+#             */
/*   Updated: 2023/06/08 11:55:37 by morishitash      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>
# include <inttypes.h>

int	ft_printf(const char *str, ...);
int	ft_format(va_list data, const char format);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putptr(uintptr_t nb);

#endif