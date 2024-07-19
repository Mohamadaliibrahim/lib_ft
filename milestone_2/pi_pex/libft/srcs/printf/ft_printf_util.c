/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:56:37 by moassi            #+#    #+#             */
/*   Updated: 2024/05/23 19:39:40 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_strcontain(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen_format_specifier(const char *str)
{
	int	len;

	len = 1;
	while (str[len] && !ft_strcontain("diuxXscp%", str[len]))
	{
		len++;
	}
	return (len);
}

int	ft_putstr_n(const char *str, int precision)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (precision == -1)
		return (ft_putstr(str));
	while (i < precision && str[i] != '\0')
	{
		len += ft_putchar(str[i]);
		i++;
	}
	return (len);
}

int	ft_numlen(long nb, int base_len)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		len++;
		nb *= -1;
	}
	while (nb >= base_len)
	{
		nb /= base_len;
		len++;
	}
	return (len + 1);
}

int	calc_nums_len(va_list args, char specifier, long *num)
{
	if (specifier == 'i' || specifier == 'd')
	{
		*num = va_arg(args, int);
		return (ft_numlen(*num, 10));
	}
	else if (specifier == 'u')
	{
		*num = va_arg(args, unsigned int);
		return (ft_numlen(*num, 10));
	}
	else
	{
		*num = va_arg(args, unsigned int);
		return (ft_numlen(*num, 16));
	}
}
