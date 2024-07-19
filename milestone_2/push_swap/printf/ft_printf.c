/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshehab <hshehab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:27:48 by hshehab           #+#    #+#             */
/*   Updated: 2024/06/20 12:30:51 by hshehab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_conversions(const char flag, va_list args)
{
	unsigned long long int	a;

	if (flag == 'c')
		return (ft_putchar(va_arg(args, unsigned int)));
	else if (flag == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (flag == 'd' || flag == 'i')
		return (print_int(va_arg(args, int)));
	else if (flag == 'u')
		return (print_ui(va_arg(args, unsigned int)));
	else if (flag == '%')
		return (ft_putchar('%'));
	else if (flag == 'x')
		return (print_hexas(va_arg(args, unsigned int)));
	else if (flag == 'X')
		return (print_hexab(va_arg(args, unsigned int)));
	else if (flag == 'p')
	{
		a = va_arg(args, unsigned long long);
		return (print_hexap(a));
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		printed_length;
	va_list	args;

	i = 0;
	printed_length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			printed_length += handle_conversions(str[i + 1], args);
			i++;
		}
		else
		{
			printed_length += ft_putchar(str[i]);
		}
		i++;
	}
	return (printed_length);
}
