/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 22:14:38 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 22:14:38 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*tmp;
	int		size;

	tmp = (char *)str;
	size = 0;
	while (*tmp != '\0')
	{
		tmp++;
		size++;
	}
	while (size >= 0)
	{
		if (*tmp == c)
			return (tmp);
		size--;
		tmp--;
	}
	return (NULL);
}

/*
int main(void)
{
    char *str;
    char c;
    char d;
    char e;

    str = "abbabbacccc";
    c = 'c';
    d = 'b';
    e = 'z';
    printf("%s\n", ft_strrchr(str, c));
    printf("%s\n", ft_strrchr(str, d));
    printf("%s", ft_strrchr(str, e));
}
*/