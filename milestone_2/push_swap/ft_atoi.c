/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshehab <hshehab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 09:44:15 by hshehab           #+#    #+#             */
/*   Updated: 2024/07/08 14:13:41 by hshehab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

long	ft_atoi( char *nptr)
{
	int		i;
	int		flag;
	long	number;

	i = 0;
	flag = 1;
	number = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
	{
		i++;
	}
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			flag = -1;
		i++;
	}
	while ((nptr[i] >= 48 && nptr[i] <= 57))
	{
		number = number * 10 + (nptr[i] - 48);
		i++;
	}
	return (number * flag);
}
