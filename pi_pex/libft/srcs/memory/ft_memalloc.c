/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 21:00:19 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 21:00:19 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ptr;

	ptr = malloc(size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size);
	return (ptr);
}

/*
void ft_bzero(void *dest, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char *)dest;
	while (i < n)
	{
		tmp[i] = 0;
		i++;
	}
}

int main(void)
{
	int *ptr;

	ptr = (int *)ft_memalloc(10 * sizeof(int));
	for (size_t i = 0; i < 10; i++)
		printf("%d ", ptr[i]);
	
	printf("\n");
	return 0;
}
*/