/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamibr <mohamibr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:25:28 by mohamibr          #+#    #+#             */
/*   Updated: 2024/10/20 15:23:12 by mohamibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*array;

	if (size != 0 && number > 2147483647 / size)
		return (0);
	array = (void *)malloc(size * number);
	if (!array)
		return (NULL);
	ft_bzero(array, size * number);
	return ((void *)array);
}
