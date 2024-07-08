/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_implementation12.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshehab <hshehab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:49:27 by hshehab           #+#    #+#             */
/*   Updated: 2024/07/08 15:45:26 by hshehab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	resetabovemedian(t_Stack *a, t_Stack *b)
{
	t_Node	*ptr;

	if (!isempty(*a))
	{
		ptr = a->head;
		while (ptr)
		{
			ptr->data.abovemedian = 0;
			ptr = ptr->next;
		}
	}
	if (!isempty(*b))
	{
		ptr = b->head;
		while (ptr)
		{
			ptr->data.abovemedian = 0;
			ptr = ptr->next;
		}
	}
}

void	freelinkedlist(t_Stack *stack)
{
	t_Node	*ptr;

	if (stack == NULL)
		return ;
	ptr = stack->head;
	while (stack->head != NULL)
	{
		stack->head = stack->head->next;
		free(ptr);
		ptr = stack->head;
	}
	return ;
}

int	initialize_stacks(int argc, char **argv, t_Stack **a, t_Stack **b)
{
	*a = create_stack();
	*b = create_stack();
	if (argc > 2)
	{
		if (read_multistr_push_a(argv, *a) == 0)
		{
			freestacks(*a, *b);
			return (0);
		}
	}
	else if (argc == 2)
	{
		if (read_1str_push_a(argv[1], *a) == 0)
		{
			freestacks(*a, *b);
			return (0);
		}
	}
	else
	{
		freestacks(*a, *b);
		return (0);
	}
	return (1);
}

void	turks(int argc, char **argv, int flag)
{
	t_Stack	*a;
	t_Stack	*b;
	int		i;

	if (!initialize_stacks(argc, argv, &(a), &(b)))
		return ;
	if (issorted(*a))
	{
		freestacks(a, b);
		return ;
	}
	i = 0;
	while (stacklength(*a) > 3 && i < 2)
	{
		pb(a, b, flag);
		i++;
	}
	if ((stacklength(*a) == 2 || stacklength(*a) == 3
			|| stacklength(*a) == 1 || stacklength(*a) == 0)
		&& (stacklength(*b) == 0))
		minisort(a, flag);
	else
		turks_helper1(a, b, flag);
	freestacks(a, b);
}

void	minisort(t_Stack *stack, int flag)
{
	if (stacklength(*stack) == 3)
	{
		sortthree(stack, flag);
		freelinkedlist(stack);
	}
	else if (stacklength(*stack) == 2)
	{
		if (stack->head->data.data > stack ->head->next->data.data)
		{
			ra(stack, flag);
			freelinkedlist(stack);
			return ;
		}
		else
		{
			freelinkedlist(stack);
			return ;
		}
	}
	freelinkedlist(stack);
	return ;
}
