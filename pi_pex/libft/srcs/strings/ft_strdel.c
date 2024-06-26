/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 21:55:00 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 21:55:00 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_strdel(char **as)
{
	ft_memdel((void **)as);
}

/*
void 	ft_memdel(void **ap)
{
    if (ap && *ap)
    {
        free(*ap);
        *ap = NULL;
    }
}

int main(void)
{
    char *str = strdup("Hello, world!");
    printf("before deletion: %s\n", str);
    ft_strdel(&str);
    printf("after deletion: %s\n", str);

    return 0;
}
*/