/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 21:07:36 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 21:07:36 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
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
    ft_putstr_newl_fd(str, 1);
    ft_putstr_newl_fd(str, 1);
}
*/