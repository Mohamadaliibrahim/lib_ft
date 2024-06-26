/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insertion_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 19:38:59 by moassi            #+#    #+#             */
/*   Updated: 2024/05/20 16:39:22 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_insertion_sort(int *arr, size_t size, int (*compare)(int, int))
{
	unsigned int	i;
	unsigned int	j;
	int				tmp;

	i = 1;
	while (i < size)
	{
		j = i;
		while (j > 0 && compare(arr[j - 1], arr[j]) > 0)
		{
			tmp = arr[j - 1];
			arr[j - 1] = arr[j];
			arr[j] = tmp;
			j--;
		}
		i++;
	}
}

/*
int	ft_int_compare(int a, int b)
{
	return (a - b);
}

t_int_array	*ft_new_int_arr(size_t size)
{
	t_int_array *int_arr;
	int_arr = (t_int_array *)malloc(sizeof(t_int_array));
	int_arr->array = (int *)malloc(sizeof(int) * size);
	ft_bzero(int_arr->array, size);
	int_arr->size = size;
	return (int_arr);
}

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
	t_int_array *arr;

	arr = ft_new_int_arr(5);

	arr->array[0] = 21;
	arr->array[1] = 5;
	arr->array[2] = 3;
	arr->array[3] = 16;
	arr->array[4] = 8;

	ft_insertion_sort(arr->array, 5, ft_int_compare);

	int i = 0;
	while (i < 5)
	{
		printf("%d\n", arr->array[i]);
		i++;
	}

	return (0);
}
*/