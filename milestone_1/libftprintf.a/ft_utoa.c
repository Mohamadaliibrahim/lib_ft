/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamibr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 19:26:15 by mohamibr          #+#    #+#             */
/*   Updated: 2024/06/19 19:27:59 by mohamibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_utoa(unsigned int num)
{
	char	buffer[11];
	int		i;

	i = 10;
	buffer[i] = '\0';
	if (num == 0)
	{
		buffer[--i] = '0';
	}
	else
	{
		while (num > 0)
		{
			buffer[--i] = '0' + (num % 10);
			num /= 10;
		}
	}
	return (ft_strdup(&buffer[i]));
}
