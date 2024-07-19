/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 20:43:49 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 20:43:49 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_isupper(int arg)
{
	if (arg >= 65 && arg <= 90)
		return (1);
	return (0);
}

/*
int main(void)
{
    int upper;
    int not_upper;

    upper = 'A';
    not_upper = 'a';

    if (ft_isupper(upper))
        printf("%c%s%c", upper, " is upper", '\n');
    else
        printf("%c%s%c", upper, " is not upper", '\n');

    if (ft_isupper(not_upper))
        printf("%c%s%c", not_upper, " is upper", '\n');
    else
        printf("%c%s%c", not_upper, " is not upper", '\n');
}
*/