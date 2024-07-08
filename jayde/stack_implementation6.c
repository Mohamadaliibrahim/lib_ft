/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_implementation6.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshehab <hshehab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 11:31:36 by hshehab           #+#    #+#             */
/*   Updated: 2024/07/06 10:33:29 by hshehab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <stdio.h>

void	setprices(t_Stack *s)
{
	int		length;
	int		median;
	t_Node	*ptr;
	int		i;

	if (s == NULL)
		return ;
	length = stacklength(*s);
	median = length / 2;
	ptr = s->head;
	i = 0;
	while (i <= median)
	{
		ptr->data.price = i;
		i++;
		ptr = ptr->next;
	}
	i = length - median ;
	while (i >= 0 && ptr != NULL)
	{
		i--;
		ptr->data.price = i;
		ptr = ptr->next;
	}
}

void	setcheapest(t_Stack *a)
{
	t_Node	*ptr;
	long	minprice;
	t_Node	*target;

	if (a == NULL)
		return ;
	minprice = LONG_MAX;
	ptr = a->head;
	while (ptr)
	{
		if (ptr->data.price + ptr->data.target->data.price < minprice)
		{
			minprice = ptr->data.price + ptr->data.target->data.price;
			target = ptr;
		}
		ptr = ptr->next;
	}
	target->data.cheapest = 1;
	target->data.target->data.cheapest = 1;
}

void	resetcheapest(t_Stack *a, t_Stack *b)
{
	t_Node	*ptr;

	if (!isempty(*a))
	{
		ptr = a->head;
		while (ptr)
		{
			ptr->data.cheapest = 0;
			ptr = ptr->next;
		}
	}
	if (!isempty(*b))
	{
		ptr = b->head;
		while (ptr)
		{
			ptr->data.cheapest = 0;
			ptr = ptr->next;
		}
	}
}
