/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 20:40:33 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 20:40:33 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_isdigit(int arg)
{
	if (arg >= 48 && arg <= 57)
		return (1);
	return (0);
}

/*
int main(void)
{
	int digit;
	int not_digit;

	digit = '1';
	not_digit = 'a';

	if (ft_isdigit(digit))
		printf("%c%s%c", digit, " is a digit", '\n');
	else
		printf("%c%s%c", digit, " is not a digit", '\n');

	if (ft_isdigit(not_digit))
		printf("%c%s%c", not_digit, " is a digit", '\n');
	else
		printf("%c%s%c", not_digit, " is not a digit", '\n');
}
*/