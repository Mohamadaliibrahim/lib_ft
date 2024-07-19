/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 21:58:19 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 21:58:19 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	return (ft_strcmp(s1, s2) == 0);
}

/*
int ft_strcmp(const char *str1, const char *str2)
{
    size_t	i;

    i = 0;
    while (str1[i] == str2[i] && str1[i] != '\0')
        i++;
    return (str1[i] - str2[i]);
}

int main(void)
{
    char *str1 = "aaa";
    char *str2 = "abb";

    printf ("%d\n", ft_strequ(str1, str2));
    printf ("%d\n", ft_strequ(str1, str1));
}
*/