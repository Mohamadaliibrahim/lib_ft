/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamibr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 19:19:19 by mohamibr          #+#    #+#             */
/*   Updated: 2024/06/14 19:22:16 by mohamibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		i;
	char	*ch;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	ch = (char *)malloc(sizeof(char) * (len + 1));
	if (!ch)
		return (NULL);
	while (i < len)
	{
		ch[i] = f(i, s[i]);
		i++;
	}
	ch[i] = '\0';
	return (ch);
}
