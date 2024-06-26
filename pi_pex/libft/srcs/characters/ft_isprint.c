/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 20:42:35 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 20:42:35 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_isprint(int arg)
{
	if (arg >= 32 && arg <= 126)
		return (1);
	return (0);
}

/*
int main(void)
{
    int printable;
    int not_printable;

    printable = 'A';
    not_printable = L'€';

    if (ft_isprint(printable))
        printf("%c%s%c", printable, " is printable", '\n');
    else
        printf("%c%s%c", printable, " is not printable", '\n');

    if (ft_isprint(not_printable))
        printf("%c%s%c", not_printable, " is printable", '\n');
    else
        printf("%c%s%c", not_printable, " is not printable", '\n');
}
*/