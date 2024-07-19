/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 22:03:25 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 22:03:25 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
int main(void)
{
	printf("%s%d%c", "The length of 'hello' is: ", ft_strlen("hello"), '\n');
	printf("%s%d%c", "The length of '' is: ", ft_strlen(""), '\n');
	printf("%s%d%c", "The length of 'moe' is: ", ft_strlen("moe"), '\n');
}
*/