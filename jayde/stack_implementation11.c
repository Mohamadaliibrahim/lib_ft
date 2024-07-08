/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_implementation11.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshehab <hshehab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:28:03 by hshehab           #+#    #+#             */
/*   Updated: 2024/07/06 14:14:50 by hshehab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	findthemin(t_Node *ptrb, t_Stack *stacka)
{
	t_Node	*ptra;
	long	min;

	min = LONG_MAX;
	ptra = stacka->head;
	while (ptra != NULL)
	{
		if (ptra->data.data < min)
		{
			min = ptra->data.data;
			ptrb->data.target = ptra;
		}
		ptra = ptra->next;
	}
}

void	targetingfrombtoa(t_Stack *stacka, t_Stack *stackb)
{
	t_Node	*ptra;
	t_Node	*ptrb;
	long	max;

	max = LONG_MAX;
	resetcheapest(stacka, stackb);
	ptra = stacka->head;
	while (ptra != NULL)
	{
		ptrb = stackb->head;
		if (ptrb->data.data < ptra->data.data && ptra->data.data < max)
		{
			max = ptra->data.data;
			ptrb->data.target = ptra;
		}
		ptra = ptra->next;
	}
	if (max == LONG_MAX)
		findthemin(ptrb, stacka);
	ptrb->data.target->data.cheapest = 1;
	ptrb->data.cheapest = 1;
	setabovemedian(stacka);
	setabovemedian(stackb);
}

void	turks_helper2(t_Stack *stacka, t_Stack *stackb, int flag)
{
	t_Node	*ptrb;

	while (!isempty(*stackb))
	{
		ptrb = stackb->head;
		setabovemedian(stacka);
		targetingfrombtoa(stacka, stackb);
		if (ptrb->data.target->data.abovemedian == 1)
		{
			while (stacka->head->data.cheapest != 1)
				ra(stacka, flag);
		}
		else
		{
			while (stacka->head->data.cheapest != 1)
				rra(stacka, flag);
		}
		pa(stacka, stackb, flag);
	}
	ensureminata(stacka, flag);
	freelinkedlist(stacka);
}

void	turks_helper1(t_Stack *stacka, t_Stack *stackb, int flag)
{
	setprices(stacka);
	setprices(stackb);
	setabovemedian(stacka);
	setabovemedian(stackb);
	targetingmax(stacka, stackb);
	resetcheapest(stacka, stackb);
	setcheapest(stacka);
	while (stacklength(*stacka) > 3)
	{
		taketotop(stacka, stackb, flag);
		targetingmax(stacka, stackb);
		pb(stacka, stackb, flag);
		setprices(stacka);
		setabovemedian(stacka);
		setabovemedian(stackb);
		setprices(stackb);
		setindex(stacka, stackb);
		targetingmax(stacka, stackb);
		resetcheapest(stacka, stackb);
		setcheapest(stacka);
	}
	sortthree(stacka, flag);
	setabovemedian(stacka);
	setabovemedian(stackb);
	turks_helper2(stacka, stackb, flag);
}

void	freestacks(t_Stack *stacka, t_Stack *stackb)
{
	free(stacka);
	free(stackb);
}
