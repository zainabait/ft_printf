/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_addr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:42:48 by zait-bel          #+#    #+#             */
/*   Updated: 2023/12/06 13:48:34 by zait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_lower_p(unsigned long n)
{
	int	count;

	count = 0;
	if (n >= 0 && n <= 9)
		count += ft_putchar(n + 48);
	else if (n < 16)
		count += ft_putchar(n - 10 + 'a');
	else
	{
		count += ft_put_lower_p(n / 16);
		count += ft_put_lower_p(n % 16);
	}
	return (count);
}

int	ft_put_addr(unsigned long addr)
{
	int	count;

	count = ft_putstr("0x");
	count += ft_put_lower_p(addr);
	return (count);
}
