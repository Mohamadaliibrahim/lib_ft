/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 21:01:14 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 21:01:14 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	if (!dest || !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		if (*(char *)(src + i) == (char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}

/*
int main(void)
{
	char str1[] = "apple";
    char str2[] = "tree";
	ft_memccpy(str1, str2, 'r', 4);
	printf("%s", str1);
}
*/