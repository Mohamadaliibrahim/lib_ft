/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexaB.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshehab <hshehab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:28:07 by hshehab           #+#    #+#             */
/*   Updated: 2024/06/20 12:28:11 by hshehab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	print_hexa_helperb(unsigned int n)
{
	char	*s;
	int		c;

	s = "0123456789ABCDEF";
	if (n == 0)
		return ;
	else
	{
		c = n % 16;
		print_hexa_helperb(n / 16);
		write(1, &s[c], 1);
	}
}

int	count_hexab(unsigned int n)
{
	if (n == 0)
		return (0);
	else
		return (1 + count_hexab(n / 16));
}

int	print_hexab(unsigned int n)
{
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	print_hexa_helperb(n);
	return (count_hexab(n));
}
