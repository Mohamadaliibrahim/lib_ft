/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printul.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshehab <hshehab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:28:51 by hshehab           #+#    #+#             */
/*   Updated: 2024/06/20 12:29:49 by hshehab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	size_of_ul(unsigned long n)
{
	if (n / 10 == 0)
		return (1);
	else
		return (1 + size_of_ul(n / 10));
}

void	ft_putnbr_ul(unsigned long n)
{
	char	c;

	if (n / 10 == 0)
	{
		c = n + '0';
		write(1, &c, 1);
	}
	else
	{
		c = n % 10 + '0';
		ft_putnbr_ul(n / 10);
		write(1, &c, 1);
	}
}

int	print_ul(unsigned long n)
{
	ft_putnbr_ul(n);
	return (size_of_ul(n));
}
