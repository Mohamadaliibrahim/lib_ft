/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 21:06:42 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 21:06:42 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_putchar_fd(char c, int fd)
{
	unsigned char	l;

	l = (unsigned char)c;
	write(fd, &l, 1);
}

/*
int main(void)
{
    char c;

    c = 'a';
    ft_putchar_fd(c, 1);
}
*/