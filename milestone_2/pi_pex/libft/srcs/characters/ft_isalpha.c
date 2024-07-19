/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 20:39:28 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 20:39:28 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_isalpha(int arg)
{
	if (arg >= 65 && arg <= 90)
		return (1);
	if (arg >= 97 && arg <= 122)
		return (1);
	return (0);
}

/*
int main(void)
{
	int alpha;
	int not_alpha;

	alpha = 'a';
	not_alpha = '1';

	if (ft_isalpha(alpha))
		printf("%c%s%c", alpha, " is an alphabet", '\n');
	else
		printf("%c%s%c", alpha, " is not an alphabet", '\n');

	if (ft_isalpha(not_alpha))
		printf("%c%s%c", not_alpha, " is an alphabet", '\n');
	else
		printf("%c%s%c", not_alpha, " is not an alphabet", '\n');
}
*/