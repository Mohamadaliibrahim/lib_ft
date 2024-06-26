/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamibr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:54:08 by mohamibr          #+#    #+#             */
/*   Updated: 2024/06/19 19:19:40 by mohamibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pointer_p(char *str, void *p)
{
	unsigned long	x;
	int				i;
	int				j;
	const char		*hexa_digits;
	char			buffer[17];

	x = (unsigned long)p;
	i = 0;
	hexa_digits = "0123456789abcdef";
	if (x == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return ;
	}
	while (x > 0)
	{
		buffer[i++] = hexa_digits[x % 16];
		x /= 16;
	}
	j = 0;
	while (i > 0)
		str[j++] = buffer[--i];
	str[j] = '\0';
}

void	hexa_u(char *str, unsigned int x)
{
	int				i;
	int				j;
	const char		*hexa_digit;
	char			buffer[9];

	i = 0;
	hexa_digit = "0123456789ABCDEF";
	if (x == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return ;
	}
	while (x > 0)
	{
		buffer[i++] = hexa_digit[x % 16];
		x /= 16;
	}
	buffer[i] = '\0';
	j = 0;
	while (i > 0)
	{
		str[j++] = buffer[--i];
	}
	str[j] = '\0';
}

void	hexa(char *str, unsigned long x, int z)
{
	if (z == 'x')
		hexa_l(str, (unsigned int)x);
	else if (z == 'X')
		hexa_u(str, (unsigned int)x);
}

void	hexa_l(char *str, unsigned int x)
{
	int			i;
	int			j;
	const char	*hexa_digits;
	char		buffer[9];

	i = 0;
	hexa_digits = "0123456789abcdef";
	if (x == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return ;
	}
	while (x > 0)
	{
		buffer[i++] = hexa_digits[x % 16];
		x /= 16;
	}
	buffer[i] = '\0';
	j = 0;
	while (i > 0)
	{
		str[j++] = buffer[--i];
	}
	str[j] = '\0';
}

void	check_arg(const char ch, va_list ap, int *count)
{
	char	c;
	char	*str;

	if (ch == 'c')
	{
		c = (char)va_arg(ap, int);
		ft_putchar_fd(c, 1);
		(*count)++;
	}
	else if (ch == 's')
	{
		str = va_arg(ap, char *);
		if (!str)
			str = "(null)";
		ft_putstr_fd(str, 1);
		while (*str++)
			(*count)++;
	}
	else
		check_1(ch, ap, count);
}
