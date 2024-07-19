/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_implementation2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshehab <hshehab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:08:20 by hshehab           #+#    #+#             */
/*   Updated: 2024/07/05 20:20:19 by hshehab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	sa(t_Stack *s, int flag)
{
	t_element	temp;

	if (isempty(*s))
		return (0);
	if (s->head->next != NULL)
	{
		temp = s->head->data;
		s->head->data = s->head->next->data;
		s->head->next->data = temp;
		setabovemedian(s);
		if (flag)
			ft_printf("sa\n");
		return (1);
	}
	return (0);
}

int	sb(t_Stack *s, int flag)
{
	t_element	temp;

	if (isempty(*s))
		return (0);
	if (s->head->next != NULL)
	{
		temp = s->head->data;
		s->head->data = s->head->next->data;
		s->head->next->data = temp;
		setabovemedian(s);
		if (flag)
			ft_printf("sb\n");
		return (1);
	}
	return (0);
}

int	ss(t_Stack *a, t_Stack *b, int flag)
{
	if (sa(a, 0) && sb(b, 0) && flag)
	{
		setabovemedian(b);
		setabovemedian(a);
		ft_printf("ss\n");
		return (1);
	}
	return (0);
}

int	pa(t_Stack *a, t_Stack *b, int flag)
{
	t_element	data;

	if (isempty(*b))
		return (0);
	else
	{
		top(*b, &data);
		push_node_top(a, data);
		delete_top(b);
		setabovemedian(a);
		setabovemedian(b);
		if (flag)
			ft_printf("pa\n");
		return (1);
	}
	return (0);
}

int	pb(t_Stack *a, t_Stack *b, int flag)
{
	t_element	data;

	if (isempty(*a))
		return (0);
	else
	{
		top(*a, &data);
		push_node_top(b, data);
		delete_top(a);
		setabovemedian(a);
		setabovemedian(b);
		if (flag)
			ft_printf("pb\n");
		return (1);
	}
	return (0);
}
