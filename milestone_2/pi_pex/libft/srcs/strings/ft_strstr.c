/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 22:20:38 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 22:20:38 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strstr(const char *str, const char *target)
{
	size_t	i;
	size_t	j;
	size_t	found;

	i = 0;
	if (target[i] == '\0')
		return ((char *)&str[i]);
	while (str[i] != '\0')
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
int main(void)
{
    char *str = "hello memy friend";
    char *target = "";

    printf("%s", ft_strstr(str, target));
}
*/