/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 22:01:17 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 22:01:17 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strjoin(char const *s1, char const*s2)
{
	char	*res;
	size_t	total_len;

	if (!s1 || !s2)
		return (NULL);
	total_len = ft_strlen(s1) + ft_strlen(s2);
	res = (char *)malloc(sizeof(char) * (total_len + 1));
	if (!res)
		return (NULL);
	ft_strlcat(res, s1, total_len + 1);
	ft_strlcat(res, s2, total_len + 1);
	return (res);
}

/*
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

size_t ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main(void)
{
    char str1[] = "hello";
    char str2[] = " world";

    printf("%s\n", ft_strjoin(str1, str2));
}
*/