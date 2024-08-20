/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamibr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:37:05 by mohamibr          #+#    #+#             */
/*   Updated: 2024/06/12 14:54:42 by mohamibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ch;
	int		i;
	int		j;

	i = 0;
	j = 0;
	ch = (char *)malloc(sizeof(char) *(ft_strlen(s1) + ft_strlen(s2) + 1));
	if (ch == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ch[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		ch[j] = s2[i];
		i++;
		j++;
	}
	ch[j] = '\0';
	return (ch);
}
