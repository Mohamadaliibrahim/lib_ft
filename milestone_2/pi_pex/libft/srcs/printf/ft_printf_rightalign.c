/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_rightalign.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 21:05:45 by moassi            #+#    #+#             */
/*   Updated: 2024/05/24 16:00:42 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_rightalign_s(int *len, va_list args, t_format *format)
{
	char	*str;
	int		str_len;

	str = va_arg(args, char *);
	if (!str)
		str = "(null)";
	str_len = ft_strlen(str);
	if (format->precision != -1 && str_len > format->precision)
		str_len = format->precision;
	if (format->width < str_len)
		format->width = str_len;
	while (str_len < format->width)
	{
		ft_putchar(' ');
		str_len++;
	}
	ft_putstr_n(str, format->precision);
	*len += format->width;
}

void	ft_rightalign_c(int *len, va_list args, t_format *format)
{
	int	c;
	int	i;

	i = 0;
	c = va_arg(args, int);
	if (format->width < 1)
		format->width = 1;
	while (i < format->width - 1)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar(c);
	*len += format->width;
}
