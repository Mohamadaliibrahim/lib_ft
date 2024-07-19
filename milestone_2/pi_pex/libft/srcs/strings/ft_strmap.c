/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 22:03:47 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 22:03:47 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	i;

	str = ft_strdup(s);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		str[i] = f(str[i]);
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

char increment(char c)
{
    return (c + 1);
}

int main(void)
{
    char str[] = "abcde";
    char *res = ft_strmap(str, increment);
    printf("%s", res);
}
*/