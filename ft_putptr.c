/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morishitashoto <morishitashoto@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:35:46 by morishitash       #+#    #+#             */
/*   Updated: 2023/06/08 11:51:56 by morishitash      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(uintptr_t nb)
{
	size_t	i;

	if (nb == 0)
		return (write(1, "0x0", 3));
	write(1, "0x", 2);
	while (nb > 0)
	{
		if (nb % 16 < 10)
			ft_putchar(nb % 16 + '0');
		else
			ft_putchar(nb % 16 + 'a' - 10);
		nb /= 16;
		i++;
	}
	return (i + 2);
}
