/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 20:40:23 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 20:40:23 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_isascii(int arg)
{
	if (arg >= 0 && arg <= 127)
		return (1);
	return (0);
}

/*
int main(void)
{
    int ascii;
    int not_ascii;

    ascii = 'A';
    not_ascii = L'€';

    if (ft_isascii(ascii))
        printf("%c%s%c", ascii, " is ascii", '\n');
    else
        printf("%c%s%c", ascii, " is not ascii", '\n');

    if (ft_isascii(not_ascii))
        printf("%c%s%c", not_ascii, " is ascii", '\n');
    else
        printf("%c%s%c", not_ascii, " is not ascii", '\n');
}
*/