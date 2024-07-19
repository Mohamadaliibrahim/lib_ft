/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 21:08:20 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 21:08:20 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		ft_putchar_fd(n + '0', fd);
	}
}

/*
void ft_putchar_fd(char c, int fd)
{
    unsigned char l;

    l = (unsigned char)c;
    write(fd, &l, 1);
}

int main(void)
{
    int nb1;
    int nb2;
    int nb3;
    int nb4;

    nb1 = 0;
    nb2 = -34423;
    nb3 = -2147483648;
    nb4 = 789;
    ft_putnbr_fd(nb1, 1);
    ft_putchar_fd('\n', 1);
    ft_putnbr_fd(nb2, 1);
    ft_putchar_fd('\n', 1);
    ft_putnbr_fd(nb3, 1);
    ft_putchar_fd('\n', 1);
    ft_putnbr_fd(nb4, 1);
    ft_putchar_fd('\n', 1);
}
*/