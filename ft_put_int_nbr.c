/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_int_nbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:32:20 by zait-bel          #+#    #+#             */
/*   Updated: 2023/12/07 17:04:01 by zait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_int_nbr(int n)
{
	long	nbr;
	int		count;

	nbr = n;
	count = 0;
	if (nbr < 0)
	{
		count += ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr <= 9)
		count += ft_putchar(nbr + 48);
	else
	{
		count += ft_put_int_nbr(nbr / 10);
		count += ft_put_int_nbr(nbr % 10);
	}
	return (count);
}
