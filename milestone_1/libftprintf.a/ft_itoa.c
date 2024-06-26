/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamibr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 12:35:16 by mohamibr          #+#    #+#             */
/*   Updated: 2024/06/15 12:41:26 by mohamibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_digit(int c)
{
	int		ch;
	long	num;

	num = c;
	ch = 0;
	if (num <= 0)
	{
		num = -num;
		ch = 1;
	}
	while (num > 0)
	{
		num /= 10;
		ch++;
	}
	return (ch);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*ch;
	long	x;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	i = count_digit(n);
	x = n;
	ch = (char *)malloc(sizeof(char) * (i + 1));
	if (!ch)
		return (NULL);
	ch[i] = '\0';
	if (x < 0)
	{
		ch[0] = '-';
		x = -x;
	}
	while (x > 0)
	{
		ch[--i] = (x % 10) + '0';
		x /= 10;
	}
	return (ch);
}
