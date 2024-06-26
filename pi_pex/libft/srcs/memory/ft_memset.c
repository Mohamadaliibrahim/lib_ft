/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 21:05:57 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 21:05:57 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

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

/*
int main(void)
{
    char arr[5];
    int i;

    arr[0] = 'h';
    arr[1] = 'e';
    arr[2] = 'l';
    arr[3] = 'l';
    arr[4] = 'o';

    ft_memset(arr + 1, '.', 2);

    for (i = 0; i < 5; i++)
    {
        printf("%c ", arr[i]);
    }
    printf("\n");

    return 0;
}
*/