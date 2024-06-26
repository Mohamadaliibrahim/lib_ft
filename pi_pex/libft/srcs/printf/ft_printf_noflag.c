/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_noflag.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 19:48:59 by moassi            #+#    #+#             */
/*   Updated: 2024/05/24 16:01:01 by moassi           ###   ########.fr       */
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

static void	ft_rightalign_nums(int *len, va_list args, t_format *format)
{
	long	num;
	int		output_len;

	output_len = calc_nums_len(args, format->specifier, &num);
	if (format->width < output_len)
		format->width = output_len;
	while (output_len < format->width)
	{
		ft_putchar(' ');
		output_len++;
	}
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	if (format->specifier == 'd' || format->specifier == 'i')
		ft_putnbr(num);
	else if (format->specifier == 'u')
		ft_putunsigned(num);
	else if (format->specifier == 'x')
		ft_putbase("0123456789abcdef", num);
	else
		ft_putbase("0123456789ABCDEF", num);
	*len += format->width;
}

static void	ft_rightalign_p(int *len, va_list args, t_format *format)
{
	void	*ptr;
	int		address_len;
	int		i;

	ptr = va_arg(args, void *);
	i = 0;
	address_len = 5;
	if (ptr)
		address_len = ft_numlen((unsigned long)ptr, 16) + 2;
	if (address_len > format->width)
		format->width = address_len;
	while (i < format->width - address_len)
	{
		ft_putchar(' ');
		i++;
	}
	if (ptr)
	{
		ft_putstr("0x");
		ft_putbase("0123456789abcdef", (unsigned long)ptr);
	}
	else
		ft_putstr("(nil)");
	*len += format->width;
}

void	ft_no_flag(int *len, va_list args, t_format *format)
{
	if (format->width == 0)
		*len += ft_print_arg(args, format);
	else
	{
		if (ft_strcontain("diuxX", format->specifier))
			ft_rightalign_nums(len, args, format);
		if (format->specifier == 's')
			ft_rightalign_s(len, args, format);
		if (format->specifier == 'c')
			ft_rightalign_c(len, args, format);
		if (format->specifier == 'p')
			ft_rightalign_p(len, args, format);
	}
}
