/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamibr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:06:16 by mohamibr          #+#    #+#             */
/*   Updated: 2024/06/19 18:26:38 by mohamibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *hello, ...)
{
	va_list		ap;
	int			count;

	count = 0;
	va_start(ap, hello);
	while (*hello)
	{
		if (*hello == '%' && *(++hello) && *hello != '\0')
		{
			if (*hello == '%')
				count += ft_putchar_fd('%', 1);
			else
				check_arg(*hello, ap, &count);
		}
		else
		{
			ft_putchar_fd(*hello, 1);
			count++;
		}
		hello++;
	}
	va_end(ap);
	return (count);
}
