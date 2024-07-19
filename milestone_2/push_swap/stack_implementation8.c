/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_implementation8.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshehab <hshehab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 20:15:16 by hshehab           #+#    #+#             */
/*   Updated: 2024/07/06 12:43:06 by hshehab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	sortthree(t_Stack *s, int flag)
{
	if (stacklength(*s) != 3)
	{
		return (0);
	}
	if (case12helper(s, flag))
		return (1);
	if (case34helper(s, flag))
		return (1);
	if (case5helper(s, flag))
		return (1);
	return (0);
}

int	case12helper(t_Stack *s, int flag)
{
	t_Node	*ptr;

	ptr = s->head;
	if (ptr->data.data < ptr->next->data.data
		&& ptr->next->data.data > ptr->next->next->data.data
		&& ptr->data.data < ptr->next->next->data.data)
	{
		rra(s, flag);
		sa(s, flag);
		return (1);
	}
	else if (ptr->data.data > ptr->next->data.data
		&& ptr->next->data.data < ptr->next->next->data.data
		&& ptr->data.data < ptr->next->next->data.data)
	{
		sa(s, flag);
		return (1);
	}
	return (0);
}

int	case34helper(t_Stack *s, int flag)
{
	t_Node	*ptr;

	ptr = s->head;
	if (ptr->data.data > ptr->next->data.data
		&& ptr->next->data.data > ptr->next->next->data.data
		&& ptr->data.data > ptr->next->next->data.data)
	{
		sa(s, flag);
		rra(s, flag);
		return (1);
	}
	else if (ptr->data.data < ptr->next->data.data
		&& ptr->next->data.data > ptr->next->next->data.data
		&& ptr->data.data > ptr->next->next->data.data)
	{
		rra(s, flag);
		return (1);
	}
	return (0);
}

int	case5helper(t_Stack *s, int flag)
{
	t_Node	*ptr;

	ptr = s->head;
	if (ptr->data.data > ptr->next->data.data
		&& ptr->next->data.data < ptr->next->next->data.data
		&& ptr->data.data > ptr->next->next->data.data)
	{
		rra(s, flag);
		rra(s, flag);
		return (1);
	}
	return (0);
}
