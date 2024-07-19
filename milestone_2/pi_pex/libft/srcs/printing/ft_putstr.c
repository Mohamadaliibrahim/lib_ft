/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 21:10:20 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 21:10:20 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_putstr(char const *s)
{
	ft_putstr_fd(s, 1);
	return (ft_strlen(s));
}

/*

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

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
    ft_putstr(str);
}
*/