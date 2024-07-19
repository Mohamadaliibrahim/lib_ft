/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_zero_pad.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:06:29 by moassi            #+#    #+#             */
/*   Updated: 2024/05/23 21:08:02 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	ft_left_align_case_p(int *len, t_format *format, void *ptr)
{
	int	i;
	int	address_len;

	address_len = 5;
	i = 0;
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

static void	ft_zero_pad_p(int *len, va_list args, t_format *format)
{
	void	*ptr;
	int		address_len;
	int		i;

	ptr = va_arg(args, void *);
	if (format->precision == -1 && ptr)
	{
		i = 0;
		address_len = ft_numlen((unsigned long)ptr, 16) + 2;
		if (address_len > format->width)
			format->width = address_len;
		ft_putstr("0x");
		while (i < format->width - address_len)
		{
			ft_putchar('0');
			i++;
		}
		ft_putbase("0123456789abcdef", (unsigned long)ptr);
		*len += format->width;
	}
	else
		ft_left_align_case_p(len, format, ptr);
}

static void	ft_zero_pad_nums(int *len, va_list args, t_format *format)
{
	long	num;
	int		output_len;

	output_len = calc_nums_len(args, format->specifier, &num);
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	if (format->width < output_len)
		format->width = output_len;
	while (output_len < format->width)
	{
		ft_putchar('0');
		output_len++;
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

void	ft_zero_pad(int *len, va_list args, t_format *format)
{
	if (format->specifier == 'p')
		ft_zero_pad_p(len, args, format);
	if (ft_strcontain("diuxX", format->specifier))
		ft_zero_pad_nums(len, args, format);
	if (format->specifier == 's')
		ft_rightalign_s(len, args, format);
	if (format->specifier == 'c')
		ft_rightalign_c(len, args, format);
}
