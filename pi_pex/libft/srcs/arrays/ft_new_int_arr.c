/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_int_arr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:54:20 by moassi            #+#    #+#             */
/*   Updated: 2024/05/20 16:39:35 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_int_array	*ft_new_int_arr(size_t size)
{
	t_int_array	*int_arr;

	int_arr = (t_int_array *)malloc(sizeof(t_int_array));
	int_arr->array = (int *)malloc(sizeof(int) * size);
	ft_bzero(int_arr->array, size);
	int_arr->size = size;
	return (int_arr);
}

/*
void	ft_bzero(void *dest, size_t n)
{
	ft_memset(dest, 0, n);
}

void	*ft_memset(void *dest, int x, size_t n)
{
	size_t	i;

	if (!dest)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(char *)(dest + i) = (unsigned char)x;
		i++;
	}
	return (dest);
}

int main(void)
{
	t_int_array *int_arr  = ft_new_int_arr(5);

	int i;
	while (i < int_arr->size)
	{
		printf("%d\n", int_arr->array[i] + 1);
		i++;
	}
}
*/