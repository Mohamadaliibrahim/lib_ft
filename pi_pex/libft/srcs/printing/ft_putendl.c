/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 21:07:59 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 21:07:59 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_putendl(char const *s)
{
	ft_putstr_fd(s, 1);
	ft_putchar_fd('\n', 1);
}

/*
void ft_putchar_fd(char c, int fd)
{
    unsigned char l;

    l = (unsigned char)c;
    write(fd, &l, 1);
}

void ft_putstr_fd(char const *str, int fd)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar_fd(str[i], fd);
        i++;
    }
}

int main(void)
{
    char *str;

    str = "abcde";
    ft_putstr_newl(str);
    ft_putstr_newl(str);
}
*/