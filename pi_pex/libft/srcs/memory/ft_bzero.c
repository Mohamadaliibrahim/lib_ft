/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 20:39:43 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 20:39:43 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_bzero(void *dest, size_t n)
{
	ft_memset(dest, 0, n);
}

/*
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

int main(void) {
    char *str;

    str = (char *)malloc(6 * sizeof(char));
    if (str == NULL)
		return (1);
    str[0] = 'h';
    str[1] = 'e';
    str[2] = 'l';
    str[3] = 'l';
    str[4] = 'o';
    str[5] = '\0';
    printf("Original string: %s\n", str);
    ft_bzero(str, 6 * sizeof(char));
    printf("Modified string: %s\n", str);
    free(str);
    return (0);
}
*/