/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 21:11:45 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 21:11:45 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*tmp;

	tmp = (char *)str;
	while (*tmp != '\0')
	{
		if (*tmp == c)
			return (tmp);
		tmp++;
	}
	return (NULL);
}

/*
int main(void)
{
    char *str;
    char c;
    char d;

    str = "hello";
    c = 'a';
    d = 'e';
    printf("%s\n", ft_strchr(str, d));
    printf("%s", ft_strchr(str, c));
}
*/