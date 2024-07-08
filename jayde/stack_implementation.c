/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_implementation.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshehab <hshehab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 18:03:04 by hshehab           #+#    #+#             */
/*   Updated: 2024/07/05 18:20:04 by hshehab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_Node	*create_node(t_element value)
{
	t_Node	*newnode;

	newnode = malloc(sizeof(t_Node));
	if (!newnode)
		return (NULL);
	newnode->next = NULL;
	newnode->previous = NULL;
	newnode->data = value;
	newnode->data.target = NULL;
	return (newnode);
}

t_Stack	*create_stack(void)
{
	t_Stack	*new;

	new = malloc(sizeof(t_Stack));
	if (!new)
		return (NULL);
	new->head = NULL;
	new->tail = NULL;
	return (new);
}

int	push_node_top(t_Stack *s, t_element data)
{
	t_Node	*newnode;

	newnode = create_node(data);
	if (isempty(*s))
	{
		s->head = newnode;
		s->tail = newnode;
		return (1);
	}
	else
	{
		newnode->next = s->head;
		s->head->previous = newnode;
		s->head = newnode;
		return (1);
	}
	return (0);
}

int	push_node_bottom(t_Stack *s, t_element data)
{
	t_Node	*newnode;

	newnode = create_node(data);
	if (isempty(*s))
	{
		s->head = newnode;
		s->tail = newnode;
		return (1);
	}
	else
	{
		newnode->previous = s->tail;
		s->tail->next = newnode;
		s->tail = newnode;
		return (1);
	}
	return (0);
}

int	delete_top(t_Stack *s)
{
	t_Node	*ptr;

	if (!s || !s->head || !s->tail)
		return (0);
	ptr = s->head;
	if (s->head == s->tail)
	{
		free(ptr);
		s->head = NULL;
		s->tail = NULL;
	}
	else
	{
		s->head = s->head->next;
		if (s->head)
			s->head->previous = NULL;
		free(ptr);
	}
	return (1);
}
