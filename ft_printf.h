/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:49:42 by zait-bel          #+#    #+#             */
/*   Updated: 2023/12/06 12:47:20 by zait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_put_int_nbr(int n);
int	ft_put_uns_nbr(unsigned int n);
int	ft_put_addr(unsigned long addr);
int	ft_printf(const char *str, ...);
int	ft_put_lower_hex(unsigned int n);
int	ft_put_upper_hex(unsigned int n);

#endif