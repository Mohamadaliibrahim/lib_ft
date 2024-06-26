/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 21:59:43 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 21:59:43 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s && s[i] && f)
	{
		f(i, &s[i]);
		i++;
	}
}

/*
void iteri(unsigned int i, char *c)
{
    char s = i + '0';
    write(1, &s, 1);
    write(1, c, 1);
    write(1,"\n", 1);
}

int main(void)
{
    char str[] = "abcde";
    ft_striteri(str, iteri);
}
*/