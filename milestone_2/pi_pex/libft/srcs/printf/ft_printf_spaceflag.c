/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_spaceflag.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 22:44:50 by moassi            #+#    #+#             */
/*   Updated: 2024/05/29 22:47:32 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_space_flag(int *len, va_list args, t_format *format)
{
	long	num;
	int		output_len;

	output_len = calc_nums_len(args, format->specifier, &num);
	if (num >= 0)
		output_len++;
	if (format->width < output_len)
		format->width = output_len;
	while (output_len < format->width)
	{
		ft_putchar(' ');
		output_len++;
	}
	if (num >= 0)
		ft_putchar(' ');
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	ft_putnbr(num);
	*len += format->width;
}
