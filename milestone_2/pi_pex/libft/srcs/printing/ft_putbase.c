/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 20:51:24 by moassi            #+#    #+#             */
/*   Updated: 2024/05/20 16:42:27 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static int	ft_print_rec(char *base, long nb)
{
	int	len;
	int	base_len;

	len = 0;
	base_len = ft_strlen(base);
	if (nb >= base_len)
		len += ft_print_rec(base, nb / base_len);
	len += ft_putchar(base[nb % base_len]);
	return (len);
}

int	ft_putbase(char *base, long n)
{
	int		len;

	len = 0;
	if (n == 0)
		return (ft_putchar(base[0]));
	if (n < 0)
	{
		n *= -1;
		len += ft_putchar('-');
	}
	return (len + ft_print_rec(base, n));
}
