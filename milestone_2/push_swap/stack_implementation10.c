/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_implementation10.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshehab <hshehab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 22:24:18 by hshehab           #+#    #+#             */
/*   Updated: 2024/07/08 15:44:54 by hshehab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	taketotop(t_Stack *a, t_Stack *b, int flag)
{
	t_Node	*ptra;

	if (!isempty(*a) && !isempty(*b))
	{
		ptra = a->head;
		while (ptra->data.cheapest != 1)
			ptra = ptra->next;
	}
	if (ptra->data.abovemedian == 1 && ptra->data.target->data.abovemedian == 0)
		sort1(a, b, flag);
	else if (ptra->data.abovemedian == 0
		&& ptra->data.target->data.abovemedian == 1)
		sort2(a, b, flag);
	else if (ptra->data.abovemedian == 0
		&& ptra->data.target->data.abovemedian == 0)
		sort3(a, b, flag);
	else if (ptra->data.abovemedian == 1
		&& ptra->data.target->data.abovemedian == 1)
		sort4(a, b, flag);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

int	duplicates(char **str)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (str[i])
	{
		if (ft_atoi(str[i]) > 2147483647 || ft_atoi(str[i]) < -2147483648)
			return (1);
		while (str[j])
		{
			if (ft_strcmp(str[i], str[j]) == 0)
				return (1);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (0);
}

void	freematrix(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}

int	read_1str_push_a(char *str, t_Stack *s)
{
	char		**matrix;
	int			i;
	t_element	e;

	if (!integercheck_single(str))
	{
		ft_printf("Error\n");
		return (0);
	}
	matrix = ft_split(str, ' ');
	if (duplicates(matrix))
	{
		ft_printf("Error\n");
		freematrix(matrix);
		return (0);
	}
	i = 0;
	while (matrix[i] != NULL)
	{
		e.data = ft_atoi(matrix[i]);
		push_node_bottom(s, e);
		i++;
	}
	freematrix(matrix);
	return (1);
}	
