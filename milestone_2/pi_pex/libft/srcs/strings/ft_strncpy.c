/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 22:10:42 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 22:10:42 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int main(void)
{
    char dest[6];
    char *src;
    char *result;

    src = "hello";
    result = ft_strncpy(dest, src, 2);

    printf("%s%c", dest, '\n');
    printf("%s%c", result, '\n');

    result = ft_strncpy(dest, src, 10);

    printf("%s%c", dest, '\n');
    printf("%s%c", result, '\n');
}
*/