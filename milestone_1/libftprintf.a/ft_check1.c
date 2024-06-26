/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamibr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 18:21:18 by mohamibr          #+#    #+#             */
/*   Updated: 2024/06/19 19:28:50 by mohamibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_1(const char ch, va_list ap, int *count)
{
	unsigned int	num;
	char			*str;

	if (ch == 'i' || ch == 'd')
	{
		num = va_arg(ap, int);
		str = ft_itoa(num);
		ft_putstr_fd(str, 1);
		*count += ft_strlen(str);
		free(str);
	}
	else if (ch == 'u')
	{
		num = va_arg(ap, unsigned int);
		str = ft_utoa(num);
		ft_putstr_fd(str, 1);
		*count += ft_strlen(str);
		free(str);
	}
	else
		check_2(ch, ap, count);
}

void	check_2(const char ch, va_list ap, int *count)
{
	char	buffer[17];
	void	*ptr;

	if (ch == 'x' || ch == 'X')
	{
		hexa(buffer, va_arg(ap, unsigned int), ch);
		ft_putstr_fd(buffer, 1);
		*count += ft_strlen(buffer);
	}
	else if (ch == 'p')
	{
		ptr = va_arg(ap, void *);
		if (ptr == NULL)
		{
			ft_putstr_fd("(nil)", 1);
			*count += 5;
		}
		else
		{
			pointer_p(buffer, ptr);
			ft_putstr_fd("0x", 1);
			ft_putstr_fd(buffer, 1);
			*count += 2 + ft_strlen(buffer);
		}
	}
}
