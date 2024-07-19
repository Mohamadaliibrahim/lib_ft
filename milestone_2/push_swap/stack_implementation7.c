/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_implementation7.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshehab <hshehab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 15:20:43 by hshehab           #+#    #+#             */
/*   Updated: 2024/07/06 10:33:48 by hshehab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	setindex(t_Stack *a, t_Stack *b)
{
	t_Node	*ptr;
	int		i;

	if (a != NULL)
	{
		i = 0;
		ptr = a->head;
		while (ptr)
		{
			ptr->data.index = i;
			i++;
			ptr = ptr->next;
		}
	}
	if (b != NULL)
	{
		i = 0;
		ptr = b->head;
		while (ptr)
		{
			ptr->data.index = i;
			i++;
			ptr = ptr->next;
		}
	}
}

void	setabovemedian(t_Stack *s)
{
	t_Node	*ptr;
	int		length;
	int		median;

	if (s != NULL)
	{
		ptr = s->head;
		length = stacklength(*s);
		median = length / 2;
		while (median > 0)
		{
			ptr->data.abovemedian = 1;
			median--;
			ptr = ptr->next;
		}
		median = length / 2;
		while (median < length)
		{
			ptr->data.abovemedian = 0;
			median++;
			ptr = ptr->next;
		}
	}
}

void	findmaxtarget(t_Node *ptra, t_Stack *b)
{
	t_Node	*ptrb;
	t_Node	*max;

	ptrb = b->head;
	max = b->head;
	while (ptrb != NULL)
	{
		if (ptrb->data.data > max->data.data)
			max = ptrb;
		ptrb = ptrb->next;
	}
	ptra->data.target = max;
}

void	targetingmax(t_Stack *a, t_Stack *b)
{
	t_Node	*ptra;
	t_Node	*ptrb;
	long	match;

	ptra = a->head;
	while (ptra != NULL)
	{
		match = LONG_MIN;
		ptrb = b->head;
		while (ptrb != NULL)
		{
			if (ptra->data.data > ptrb->data.data && ptrb->data.data > match)
			{
				ptra->data.target = ptrb;
				match = ptrb->data.data;
			}
			ptrb = ptrb->next;
		}
		if (match == LONG_MIN)
			findmaxtarget(ptra, b);
		ptra = ptra->next;
	}
}
