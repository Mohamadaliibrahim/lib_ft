/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshehab <hshehab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 15:52:39 by hshehab           #+#    #+#             */
/*   Updated: 2024/07/06 10:38:44 by hshehab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	number_of_occur(char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			j++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
		{
			while (s[i] == c)
				i++;
		}
	}
	return (j);
}

static int	size(int *i, char c, char *s)
{
	int	j;

	j = *i;
	while (s[j] != '\0' && s[j] != c)
	{
		j++;
	}
	return (j - *i);
}

static void	assign(char *s1, char *s2, int *i, char c)
{
	int	j;

	j = 0;
	while (s2[*i] != '\0' && s2[*i] != c)
	{
		s1[j] = s2[*i];
		j++;
		(*i)++;
	}
	while (s2[*i] == c)
		(*i)++;
	s1[j] = '\0';
}

void	*allocating_memory(char **res, int len, int i, int k)
{
	res[i] = (char *)malloc(sizeof(char) * (len + 1));
	if (!res[i])
	{
		while (k < i)
		{
			free(res[k]);
			k++;
		}
		free(res);
		return (NULL);
	}
	return (res[i]);
}

char	**ft_split(char *s, char c)
{
	char	**res;
	int		n;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	n = number_of_occur(s, c);
	res = (char **)malloc(sizeof(char *) * (n + 1));
	if (!res)
		return (NULL);
	res[n] = NULL;
	while (i < n)
	{
		while (s[j] == c)
			j++;
		allocating_memory(res, size(&j, c, s), i, 0);
		if (!res[i])
			return (NULL);
		assign(res[i], s, &j, c);
		i++;
	}
	return (res);
}
