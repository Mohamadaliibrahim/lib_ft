/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 21:03:00 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 21:03:00 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(str1 + i) != *(unsigned char *)(str2 + i))
			return (*(unsigned char *)(str1 + i)
					- *(unsigned char *)(str2 + i));
		i++;
	}
	return (0);
}

/*
int main(void)
{
	char str1[] = "abc";
	char str2[] = "aca";

	printf("%d", ft_memcmp(str1, str2, 2));
}
*/