/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 22:11:36 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 22:11:36 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	return (ft_strncmp(s1, s2, n) == 0);
}

/*
int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    size_t	i;

    i = 0;
    if (n == 0)
        return (0);
    while (str1[i] == str2[i] && str1[i] != '\0' && i < n - 1)
        i++;
    return (str1[i] - str2[i]);
}

int main(void)
{
    char *str1 = "aaa";
    char *str2 = "abb";

    printf ("%d\n", ft_strnequ(str1, str2, 1));
    printf ("%d\n", ft_strnequ(str1, str2, 2));
    printf ("%d\n", ft_strnequ(str1, str2, 10));
}
*/