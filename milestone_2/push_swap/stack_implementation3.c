/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_implementation3.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshehab <hshehab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 21:07:45 by hshehab           #+#    #+#             */
/*   Updated: 2024/07/05 21:52:40 by hshehab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	rra(t_Stack *s, int flag)
{
	t_element	data;

	if (isempty(*s) || s->head->next == NULL)
		return (0);
	else
	{
		bottom(*s, &data);
		push_node_top(s, data);
		delete_bottom(s);
		setabovemedian(s);
		if (flag)
			ft_printf("rra\n");
		return (1);
	}
	return (0);
}

int	rrb(t_Stack *s, int flag)
{
	t_element	data;

	if (isempty(*s) || s->head->next == NULL)
		return (0);
	else
	{
		bottom(*s, &data);
		push_node_top(s, data);
		delete_bottom(s);
		setabovemedian(s);
		if (flag)
			ft_printf("rrb\n");
		return (1);
	}
	return (0);
}

int	rrr(t_Stack *a, t_Stack *b, int flag)
{
	if (rrb(b, 0) && rra(a, 0) && flag)
	{
		setabovemedian(a);
		setabovemedian(b);
		ft_printf("rrr\n");
		return (1);
	}
	return (0);
}

int	ra(t_Stack *s, int flag)
{
	t_element	data;

	if (isempty(*s) || s->head->next == NULL)
		return (0);
	else
	{
		top(*s, &data);
		push_node_bottom(s, data);
		delete_top(s);
		if (flag)
			ft_printf("ra\n");
		setabovemedian(s);
		return (1);
	}
	return (0);
}
