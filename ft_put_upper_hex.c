/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_upper_hex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:43:52 by zait-bel          #+#    #+#             */
/*   Updated: 2023/12/06 13:13:20 by zait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_upper_hex(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 0 && n <= 9)
		count += ft_putchar(n + 48);
	else if (n < 16)
		count += ft_putchar(n - 10 + 'A');
	else
	{
		count += ft_put_upper_hex(n / 16);
		count += ft_put_upper_hex(n % 16);
	}
	return (count);
}
