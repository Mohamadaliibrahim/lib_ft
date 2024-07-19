/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_implementation5.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshehab <hshehab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 12:20:10 by hshehab           #+#    #+#             */
/*   Updated: 2024/07/05 18:20:57 by hshehab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	single_str_split(char *str, int *array, int *size)
{
	char	**split;
	int		i;
	int		j;

	if (!integercheck_single(str))
		return (0);
	split = ft_split(str, ' ');
	i = 0;
	while (split[i] != NULL)
		i++;
	(*size) = i;
	array = malloc(sizeof(int) * i);
	if (!array)
		return (0);
	i = 0;
	j = 0;
	while (split[i] != NULL)
	{
		array[j] = ft_atoi(split[i]);
		j++;
		i++;
	}
	return (1);
}

int	multiple_str_split(char **str, int *array, int argc)
{
	int	i;

	array = malloc(sizeof(int) * argc);
	if (!array)
		return (0);
	i = 0;
	while (str[i] != NULL)
	{
		if (!integercheck_single(str[i]))
			return (0);
		array[i] = ft_atoi(str[i]);
		i++;
	}
	return (1);
}

int	duplicate(int *array, int size)
{
	int	i;
	int	j;

	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (array[i] == array[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	stacklength(t_Stack s)
{
	int		i;
	t_Node	*ptr;

	i = 0;
	if (s.head == NULL && s.tail == NULL)
		return (0);
	ptr = s.head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}

int	beforemedian(t_Stack s)
{
	int		length;
	int		position;
	t_Node	*ptr;

	length = stacklength(s);
	position = 0;
	ptr = s.head;
	while (ptr != NULL)
	{
		position++;
		ptr = ptr->next;
	}
	if (position < length / 2)
		return (1);
	else
		return (0);
}
