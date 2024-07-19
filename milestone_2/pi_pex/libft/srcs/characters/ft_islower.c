/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 20:41:58 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 20:41:58 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_islower(int arg)
{
	if (arg >= 97 && arg <= 122)
		return (1);
	return (0);
}

/*
int main(void)
{
    int lower;
    int not_lower;

    lower = 'a';
    not_lower = 'A';

    if (ft_islower(lower))
        printf("%c%s%c", lower, " is lower", '\n');
    else
        printf("%c%s%c", lower, " is not lower", '\n');

    if (ft_islower(not_lower))
        printf("%c%s%c", not_lower, " is lower", '\n');
    else
        printf("%c%s%c", not_lower, " is not lower", '\n');
}
*/