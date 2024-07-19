/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hashtag.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 20:29:32 by moassi            #+#    #+#             */
/*   Updated: 2024/05/26 20:30:14 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_hexa(int *len, va_list args, t_format *format)
{
	long	num;
	int		output_len;

	output_len = calc_nums_len(args, format->specifier, &num);
	if (num != 0)
		output_len += 2;
	if (format->width < output_len)
		format->width = output_len;
	while (output_len < format->width)
	{
		ft_putchar(' ');
		output_len++;
	}
	if (num != 0 && format->specifier == 'x')
		ft_putstr("0x");
	if (num != 0 && format->specifier == 'X')
		ft_putstr("0X");
	if (format->specifier == 'x')
		ft_putbase("0123456789abcdef", num);
	else
		ft_putbase("0123456789ABCDEF", num);
	*len += format->width;
}
