/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 22:22:09 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 22:22:09 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, int len)
{
	char	*sub;
	int		s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if ((unsigned int)s_len < start)
		len = 0;
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, len);
	return (sub);
}

/*
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (n > i)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

int main(void)
{
    char str[] = "hello world";
    printf("%s\n", ft_substr(str, 6, 3));
	printf("%s\n", ft_substr(str, 6, 99));
}
*/
