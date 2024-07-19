/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_implementation1.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshehab <hshehab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 19:31:11 by hshehab           #+#    #+#             */
/*   Updated: 2024/07/04 20:21:55 by hshehab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	isempty(t_Stack s)
{
	if (s.head == NULL && s.tail == NULL)
		return (1);
	else
		return (0);
}

int	top(t_Stack s, t_element *value)
{
	if (isempty(s))
		return (0);
	else
	{
		*value = s.head->data;
		return (1);
	}
}

int	bottom(t_Stack s, t_element *value)
{
	if (isempty(s))
		return (0);
	else
	{
		*value = s.tail->data;
		return (1);
	}
}

int	delete_bottom(t_Stack *s)
{
	t_Node	*ptr;

	if (isempty(*s))
		return (0);
	ptr = s->tail;
	if (s->tail == s->head)
	{
		free(ptr);
		s->head = NULL;
		s->tail = NULL;
		return (1);
	}
	else
	{
		s->tail = s->tail->previous;
		s->tail->next = NULL;
		free(ptr);
		return (1);
	}
	return (0);
}	
