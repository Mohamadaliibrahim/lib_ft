/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamibr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:45:38 by mohamibr          #+#    #+#             */
/*   Updated: 2024/06/12 13:00:53 by mohamibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*x;
	const unsigned char	*z;

	x = (const unsigned char *)s1;
	z = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	else
	{
		while (n--)
		{
			if (*x != *z)
			{
				return ((int)(*x - *z));
			}
			x++;
			z++;
		}
	}
	return (0);
}
