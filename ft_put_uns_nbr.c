/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_uns_nbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:35:18 by zait-bel          #+#    #+#             */
/*   Updated: 2023/12/07 17:04:50 by zait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_uns_nbr(unsigned int n)
{
	int	count;

	count = 0;
	if (n <= 9)
		count += ft_putchar(n + 48);
	else
	{
		count += ft_put_uns_nbr(n / 10);
		count += ft_put_uns_nbr(n % 10);
	}
	return (count);
}
