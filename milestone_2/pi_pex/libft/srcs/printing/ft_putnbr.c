/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 21:09:24 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 21:09:24 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static int	ft_numlen(long nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		len++;
		nb *= -1;
	}
	while (nb >= 10)
	{
		nb /= 10;
		len++;
	}
	return (len + 1);
}

int	ft_putnbr(int n)
{
	ft_putnbr_fd(n, 1);
	return (ft_numlen(n));
}

/*
void ft_putchar_fd(char c, int fd)
{
    unsigned char l;

    l = (unsigned char)c;
    write(fd, &l, 1);
}

void ft_putnbr_fd(int nb, int fd)
{
    if (nb == -2147483648)
    {
        ft_putchar_fd('-', fd);
        ft_putchar_fd('2', fd);
        nb = 147483648;
    }
    if (nb < 0)
    {
        ft_putchar_fd('-', fd);
        nb *= -1;
    }
    if (nb >= 10)
    {
        ft_putnbr_fd(nb / 10, fd);
        ft_putnbr_fd(nb % 10, fd);
    }
    else
    {
        ft_putchar_fd(nb + '0', fd);
    }
}

int main(void)
{
    int nb1;
    int nb2;
    int nb3;
    int nb4;
	int len1;
	int len2;
	int len3;
	int len4;

    nb1 = 0;
    nb2 = -34423;
    nb3 = -2147483648;
    nb4 = 789;
    len1 = ft_putnbr(nb1);
	ft_putchar_fd('\n', 1);
	ft_putnbr(len1);
    ft_putchar_fd('\n', 1);
    len2 = ft_putnbr(nb2);
	ft_putchar_fd('\n', 1);
	ft_putnbr(len2);
    ft_putchar_fd('\n', 1);
    len3 = ft_putnbr(nb3);
	ft_putchar_fd('\n', 1);
	ft_putnbr(len3);
    ft_putchar_fd('\n', 1);
    len4 = ft_putnbr(nb4);
	ft_putchar_fd('\n', 1);
	ft_putnbr(len4);
    ft_putchar_fd('\n', 1);
}
*/