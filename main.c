/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morishitashoto <morishitashoto@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 18:51:22 by morishitash       #+#    #+#             */
/*   Updated: 2023/06/10 17:58:52 by morishitash      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int a, b;

	a = 0;
	b = 0;
	a = ft_printf(" %x \n", -1);
	b = printf(" %x \n", -1);

	printf("ft_printf: %d\n", a);
	printf("printf: %d\n", b);
}
