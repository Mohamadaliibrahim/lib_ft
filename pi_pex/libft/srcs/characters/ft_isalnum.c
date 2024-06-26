/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 20:38:52 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 20:38:52 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_isalnum(int arg)
{
	if (arg >= 65 && arg <= 90)
		return (1);
	if (arg >= 97 && arg <= 122)
		return (1);
	if (arg >= 48 && arg <= 57)
		return (1);
	return (0);
}

/*
int main(void)
{
    int alnum1;
    int alnum2;
    int not_alnum;

    alnum1 = 'a';
    alnum2 = '1';
    not_alnum = '-';

    if (ft_isalnum(alnum1))
        printf("%c%s%c", alnum1, " is alpha-numerical", '\n');
    else
        printf("%c%s%c", alnum1, " is not alpha-numerical", '\n');

    if (ft_isalnum(alnum2))
        printf("%c%s%c", alnum2, " is alpha-numerical", '\n');
    else
        printf("%c%s%c", alnum2, " is not alpha-numerical", '\n');

    if (ft_isalnum(not_alnum))
        printf("%c%s%c", not_alnum, " is alpha-numerical", '\n');
    else
        printf("%c%s%c", not_alnum, " is not alpha-numerical", '\n');
}
*/