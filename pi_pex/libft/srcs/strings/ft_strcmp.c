/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 21:13:16 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 21:13:16 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_strcmp(const char *str1, const char *str2)
{
	size_t	i;

	i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0')
		i++;
	return (str1[i] - str2[i]);
}

/*
int main(void)
{
    char *str1;
    char *str2;

    str1 = "abc";
    str2 = "aba";

    printf("%d\n", ft_strcmp(str1, str2));
    printf("%d\n", ft_strcmp(str2, str1));
    printf("%d\n", ft_strcmp(str1, str1));
}
*/