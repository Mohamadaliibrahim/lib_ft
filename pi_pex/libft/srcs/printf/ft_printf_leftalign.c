/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_leftalign.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:59:21 by moassi            #+#    #+#             */
/*   Updated: 2024/05/23 17:08:40 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_print_arg(va_list args, t_format *format)
{
	void	*ptr;

	if (format->specifier == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format->specifier == 'd' || format->specifier == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format->specifier == 'u')
		return (ft_putunsigned(va_arg(args, int)));
	else if (format->specifier == 's')
		return (ft_putstr_n(va_arg(args, char *), format->precision));
	else if (format->specifier == 'p')
	{
		ptr = va_arg(args, void *);
		if (ptr)
			return (ft_putaddress(ptr));
		return (ft_putstr("(nil)"));
	}
	else if (format->specifier == 'X')
		return (ft_putbase("0123456789ABCDEF", va_arg(args, unsigned int)));
	else if (format->specifier == 'x')
		return (ft_putbase("0123456789abcdef", va_arg(args, unsigned int)));
	else
		return (ft_putchar('%'));
}

void	ft_left_align(int *len, va_list args, t_format *format)
{
	int	output_len;

	output_len = ft_print_arg(args, format);
	while (output_len < format->width)
	{
		ft_putchar(' ');
		output_len++;
	}
	*len += output_len;
}
