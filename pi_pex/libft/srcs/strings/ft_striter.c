/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 21:58:57 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 21:58:57 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	while (s && *s && f)
	{
		f(s);
		s++;
	}
}

/*
void ft_put(char *c)
{
    write(1, c, 1);
}

int main(void) {
    char str[] = "abcde"; 
    ft_striter(str, ft_put)
    return (0);
}
*/