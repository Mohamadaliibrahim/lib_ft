/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 22:24:35 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 22:24:35 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_toupper(int ch)
{
	char	c;

	if (ch >= 97 && ch <= 122)
		c = ch - 32;
	else
		c = ch;
	return (c);
}

/*
int main(void)
{
    printf("%s%c%c", "a -> ", ft_toupper('a'), '\n');
    printf("%s%c%c", "A -> ", ft_toupper('A'), '\n');
    printf("%s%c%c", "1 -> ", ft_toupper('1'), '\n');
}
*/