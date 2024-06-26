/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 21:10:42 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 21:10:42 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int main(void)
{
    char dest[11];
    char *src;
    char *result;

    dest[0] = 'h';
    dest[1] = 'e';
    dest[2] = 'l';
    dest[3] = 'l';
    dest[4] = 'o';
    dest[5] = '\0';

    src = "world";
    result = ft_strcat(dest, src);

    printf("%s%c", dest, '\n');
    printf("%s%c", result, '\n');
}
*/