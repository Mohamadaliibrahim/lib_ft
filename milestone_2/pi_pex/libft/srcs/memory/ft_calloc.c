/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 23:29:29 by moassi            #+#    #+#             */
/*   Updated: 2024/05/20 16:41:37 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*calloc(size_t num, size_t size)
{
	void	*arr;

	arr = malloc(num * size);
	if (!arr)
		return (NULL);
	ft_bzero(arr, num * size);
	return (arr);
}
