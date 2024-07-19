/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 20:37:40 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 20:37:40 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_atoi(const char *str)
{
	int	nb;
	int	sign;
	int	i;

	nb = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}

/*
int ft_isspace(int arg)
{
    return ((arg >= 9 && arg <= 13) || arg == ' ');
}

int ft_isdigit(int arg)
{
    if (arg >= 48 && arg <= 57)
        return (1);
    return (0);
}

int main(void)
{
    char *str;

    str = "    -433a433";
    printf("%d", ft_atoi(str));
}
*/