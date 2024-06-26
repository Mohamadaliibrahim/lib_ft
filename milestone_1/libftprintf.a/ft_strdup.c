/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamibr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:36:20 by mohamibr          #+#    #+#             */
/*   Updated: 2024/06/11 18:41:13 by mohamibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strdup(const char *src)
{
	char	*s;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	s = (char *) malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
	while (j < i)
	{
		s[j] = src[j];
		j++;
	}
	s[i] = '\0';
	return (s);
}
