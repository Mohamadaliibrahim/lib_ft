/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 22:13:12 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 22:13:12 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strnstr(const char *str, const char *target, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	found;

	i = 0;
	if (target[i] == '\0')
		return ((char *)&str[i]);
	while (str[i] != '\0' && i + ft_strlen(target) <= len)
	{
		j = 0;
		if (str[i] == target[j])
		{
			found = 1;
			while (target[j] != '\0')
			{
				if (target[j] != str[j + i])
					found = 0;
				j++;
			}
			if (found == 1)
				return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}

/*
size_t ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main(void)
{
    char *str = "hello memy friend";
    char *target = "me";

    printf("%s\n", ft_strnstr(str, target, 8));
    printf("%s", ft_strnstr(str, target, 7));
}
*/