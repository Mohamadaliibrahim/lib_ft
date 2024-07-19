/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexaS.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshehab <hshehab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:27:13 by hshehab           #+#    #+#             */
/*   Updated: 2024/06/20 12:27:19 by hshehab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_hexa_helpers(unsigned int n)
{
	const char	*s;
	int			c;

	s = "0123456789abcdef";
	if (n == 0)
		return ;
	else
	{
		c = n % 16;
		print_hexa_helpers(n / 16);
		write(1, &s[c], 1);
	}
}

int	count_hexas(unsigned int n)
{
	if (n == 0)
		return (0);
	else
		return (1 + count_hexas(n / 16));
}

int	print_hexas(unsigned int n)
{
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	print_hexa_helpers(n);
	return (count_hexas(n));
}
