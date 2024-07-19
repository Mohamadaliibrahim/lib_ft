/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 22:02:12 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 22:02:12 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	j = 0;
	src_len = 0;
	while (dest[i] != '\0')
		i++;
	dest_len = i;
	while (src[src_len] != '\0')
		src_len++;
	while (src[j] != '\0' && i < size - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	if (size >= dest_len)
		return (dest_len + src_len);
	else
		return (size + src_len);
}

/*
int main(void)
{
    printf("size >= destination_len\n");
    printf("-----------------------\n");
    char dest1[20] = "Hello, ";
    char src1[] = "world!";
    size_t size1 = 20;
    size_t result1 = ft_strlcat(dest1, src1, size1);
    printf("Concatenated string: %s%c", dest1, '\n');
    printf("return value: %d%c", result1, '\n');
    printf("-----------------------\n");
    printf("size < destination_len\n");
    printf("-----------------------\n");
    char dest2[10] = "Hello, ";
    char src2[] = "world!";
    size_t size2 = 5;
    size_t result2 = ft_strlcat(dest2, src2, size2);
    printf("Concatenated string: %s%c", dest2, '\n');
    printf("return value: %d%c", result2, '\n');
    printf("-----------------------\n");
    return 0;
}
*/