/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 22:12:06 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 22:12:06 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	str = ft_memalloc(size + 1);
	i = 0;
	if (!str)
	{
		return (NULL);
	}
	while (i <= size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}

/*
void ft_bzero(void *dest, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char *)dest;
	while (i < n)
	{
		tmp[i] = 0;
		i++;
	}
}

void	*ft_memalloc(size_t size)
{
    void *ptr;

    ptr  = malloc(size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, size);
    return (ptr);
}

int main(void)
{
    char *str;

    str = ft_strnew(10);
    for (size_t i = 0; i < 10; i++)
    {
        str[i] = 'a' + i; 
    }
    printf("%s\n", str);
    return 0;
}
*/