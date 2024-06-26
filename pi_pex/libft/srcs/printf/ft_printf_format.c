/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:00:29 by moassi            #+#    #+#             */
/*   Updated: 2024/06/07 23:17:39 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_check_valid_specifier(const char *str)
{
	int	i;

	i = 1;
	if (str[i] == '-' || str[i] == '0' || str[i] == '#' || str[i] == '+'
		|| str[i] == ' ')
		i++;
	while (ft_isdigit(str[i]))
		i++;
	if (str[i] == '.')
	{
		i++;
		while (ft_isdigit(str[i]))
			i++;
	}
	if (ft_strcontain("diuxXscp%", str[i]))
		return (1);
	return (0);
}

static char	ft_parse_specifier(const char *str, t_format *format)
{
	str++;
	if (*str == '-' || *str == '0' || *str == '#' || *str == '+' || *str == ' ')
	{
		format->flag = *str;
		str++;
	}
	while (ft_isdigit(*str))
	{
		format->width = (format->width * 10) + (*str - '0');
		str++;
	}
	if (*str == '.')
	{
		format->precision = 0;
		str++;
		while (ft_isdigit(*str))
		{
			format->precision = (format->precision * 10) + (*str - '0');
			str++;
		}
	}
	return (*str);
}

static void	ft_format_output(int *len, va_list args, t_format *format)
{
	if (format->specifier == '%')
		ft_putchar('%');
	else if (format->flag == '-')
		ft_left_align(len, args, format);
	else if (format->flag == '0')
		ft_zero_pad(len, args, format);
	else if (format->flag == '#' && (format->specifier == 'x'
			|| format->specifier == 'X'))
		ft_hexa(len, args, format);
	else if (format->flag == '+' && (format->specifier == 'd'
			|| format->specifier == 'i'))
		ft_plus_sign(len, args, format);
	else if (format->flag == ' ' && (format->specifier == 'd'
			|| format->specifier == 'i'))
		ft_space_flag(len, args, format);
	else if (format->flag == 'n')
		ft_no_flag(len, args, format);
}

void	ft_parse_format_specifier(const char **str, int *len, va_list args)
{
	t_format	*format;

	if (ft_check_valid_specifier(*str))
	{
		format = (t_format *)malloc(sizeof(t_format));
		format->width = 0;
		format->precision = -1;
		format->flag = 'n';
		format->specifier = ft_parse_specifier(*str, format);
		ft_format_output(len, args, format);
		*str += ft_strlen_format_specifier(*str) + 1;
		free(format);
	}
	else
	{
		*len += ft_putchar('%');
		(*str)++;
	}
}
