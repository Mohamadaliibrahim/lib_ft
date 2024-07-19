/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:16:01 by moassi            #+#    #+#             */
/*   Updated: 2024/05/20 16:42:58 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_putunsigned(unsigned int n)
{
	int		len;
	char	*base;

	base = "0123456789";
	len = 0;
	if (n >= 10)
	{
		len += ft_putunsigned(n / 10);
	}
	len += ft_putchar(base[n % 10]);
	return (len);
}

/*
int ft_putchar(char c)
{
	ft_putchar_fd(c, 1);
    return (1);
}


void ft_putchar_fd(char c, int fd)
{
    unsigned char l;

    l = (unsigned char)c;
    write(fd, &l, 1);
}

int main(void)
{
	unsigned long int num = 2131241242323234;
	int len = ft_putunsigned(num);
	printf("\n%d\n", len);
}
*/