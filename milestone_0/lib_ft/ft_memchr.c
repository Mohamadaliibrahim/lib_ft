/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamibr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:44:17 by mohamibr          #+#    #+#             */
/*   Updated: 2024/06/11 18:01:36 by mohamibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*x;
	unsigned char		ch;

	x = s;
	ch = (unsigned char )c;
	while (n--)
	{
		if (*x == ch)
		{
			return ((void *)x);
		}
		x++;
	}
	return (NULL);
}
