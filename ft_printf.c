/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:00:15 by zait-bel          #+#    #+#             */
/*   Updated: 2023/12/07 10:18:24 by zait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_conv(char c, va_list arg)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_putchar(va_arg(arg, int));
	else if (c == 'i' || c == 'd')
		count = ft_put_int_nbr(va_arg(arg, int));
	else if (c == 'u')
		count = ft_put_uns_nbr(va_arg(arg, unsigned int));
	else if (c == 'p')
		count = ft_put_addr(va_arg(arg, size_t));
	else if (c == 'x')
		count = ft_put_lower_hex(va_arg(arg, unsigned int));
	else if (c == 'X')
		count = ft_put_upper_hex(va_arg(arg, unsigned int));
	else if (c == 's')
		count = ft_putstr(va_arg(arg, char *));
	else
		count = ft_putchar(c);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		count;

	if (write(1, "", 0) == -1)
		return (-1);
	i = 0;
	count = 0;
	va_start(arg, str);
	while (str[i])
	{
		if ((str[i]) == '%')
		{
			if (str[i + 1])
			{
				count += ft_conv(str[i + 1], arg);
				i++;
			}
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(arg);
	return (count);
}
