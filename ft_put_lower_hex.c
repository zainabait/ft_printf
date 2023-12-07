/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_lower_hex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:56:04 by zait-bel          #+#    #+#             */
/*   Updated: 2023/12/07 17:04:22 by zait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_lower_hex(unsigned int n)
{
	int	count;

	count = 0;
	if (n <= 9)
		count += ft_putchar(n + 48);
	else if (n < 16)
		count += ft_putchar(n - 10 + 'a');
	else
	{
		count += ft_put_lower_hex(n / 16);
		count += ft_put_lower_hex(n % 16);
	}
	return (count);
}
