/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_implementation9.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshehab <hshehab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 21:13:32 by hshehab           #+#    #+#             */
/*   Updated: 2024/07/06 10:34:06 by hshehab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	isontop(t_Stack s, int e)
{
	t_element	value;

	if (isempty(s))
		return (0);
	top(s, &value);
	if (value.cheapest == e)
		return (1);
	return (0);
}

void	sort1(t_Stack *a, t_Stack *b, int flag)
{
	while (!isontop(*a, 1))
	{
		ra(a, flag);
	}
	while (!isontop(*b, 1))
	{
		rrb(b, flag);
	}
}

void	sort2(t_Stack *a, t_Stack *b, int flag)
{
	while (!isontop(*b, 1))
	{
		rb(b, flag);
	}
	while (!isontop(*a, 1))
	{
		rra(a, flag);
	}
}

void	sort3(t_Stack *a, t_Stack *b, int flag)
{
	while (!isontop(*a, 1) && !isontop(*b, 1))
	{
		rrr(a, b, flag);
	}
	if (!isontop(*a, 1))
	{
		while (!isontop(*a, 1))
		{
			rra(a, flag);
		}
	}
	else if (!isontop(*b, 1))
	{
		while (!isontop(*b, 1))
		{
			rrb(b, flag);
		}
	}
}

void	sort4(t_Stack *a, t_Stack *b, int flag)
{
	while (!isontop(*a, 1) && !isontop(*b, 1))
	{
		rr(a, b, flag);
	}
	if (!isontop(*a, 1))
	{
		while (!isontop(*a, 1))
		{
			ra(a, flag);
		}
	}
	if (!isontop(*b, 1))
	{
		while (!isontop(*b, 1))
		{
			rb(b, flag);
		}
	}
}
