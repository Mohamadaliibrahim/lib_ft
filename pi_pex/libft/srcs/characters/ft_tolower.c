/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 22:24:22 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 22:24:22 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_tolower(int ch)
{
	char	c;

	if (ch >= 65 && ch <= 90)
		c = ch + 32;
	else
		c = ch;
	return (c);
}

/*
int main(void)
{
    printf("%s%c%c", "a -> ", ft_tolower('a'), '\n');
    printf("%s%c%c", "A -> ", ft_tolower('A'), '\n');
    printf("%s%c%c", "1 -> ", ft_tolower('1'), '\n');
}
*/