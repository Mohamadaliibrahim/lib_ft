/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 20:43:14 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 20:43:14 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_isspace(int arg)
{
	return ((arg >= 9 && arg <= 13) || arg == ' ');
}

/*
int main(void)
{
    int space;
    int not_space;

    space = '\t';
    not_space = 'a';

    if (ft_isspace(space))
        printf("%c%s%c", space, " is space", '\n');
    else
        printf("%c%s%c", space, " is not space", '\n');

    if (ft_isspace(not_space))
        printf("%c%s%c", not_space, " is space", '\n');
    else
        printf("%c%s%c", not_space, " is not space", '\n');
}
*/