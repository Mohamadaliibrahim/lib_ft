/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 22:04:45 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 22:04:45 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	str = ft_strdup(s);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}

/*
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

char *ft_strdup(const char *src)
{
    char	*dest;

    dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
    if (!dest)
        return (NULL);
    return (ft_strcpy(dest, src));
}

char *ft_strcpy(char *dest, const char *src)
{
    size_t	i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char increment(unsigned int i, char c)
{
    return (c + i);
}

int main(void)
{
    char str[] = "aaaaa";
    char *res = ft_strmapi(str, increment);
    printf("%s", res);
}
*/