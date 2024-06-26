/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 22:10:10 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 22:10:10 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && str1[i] != '\0' && i < n - 1)
		i++;
	return (str1[i] - str2[i]);
}

/*
int main(void)
{
    char *str1;
    char *str2;

    str1 = "acc";
    str2 = "aba";

    printf("%d\n", ft_strncmp(str1, str2, 4));
    printf("%d\n", ft_strncmp(str2, str1, 4));
    printf("%d\n", ft_strncmp(str1, str1, 4));
}
*/