/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_implementation13.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshehab <hshehab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 16:12:41 by hshehab           #+#    #+#             */
/*   Updated: 2024/07/08 15:45:14 by hshehab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	read_multistr_push_a(char **str, t_Stack *s)
{
	int			i;
	t_element	e;

	i = 1;
	while (str[i] != NULL)
	{
		if (!integercheck_single(str[i]) || duplicates(str) == 1
			|| ft_atoi(str[i]) > 2147483647 || ft_atoi(str[i]) < -2147483648)
		{
			ft_printf("Error\n");
			return (0);
		}
		i++;
	}
	i = 1;
	while (str[i] != NULL)
	{
		e.data = ft_atoi(str[i]);
		push_node_bottom(s, e);
		i++;
	}
	return (1);
}

void	ensureminata_helper(t_Stack *stacka, int flag)
{
	t_Node	*ptra;

	setabovemedian(stacka);
	ptra = stacka->head;
	while (ptra)
	{
		if (ptra->data.min == 1)
			break ;
		ptra = ptra->next;
	}
	if (ptra->data.abovemedian == 0)
	{
		while (stacka->head->data.min == 0)
			rra(stacka, flag);
	}
	else
		while (stacka->head->data.min == 0)
			ra(stacka, flag);
}

void	ensureminata(t_Stack *stacka, int flag)
{
	t_Node	*ptra;
	t_Node	*ptra1;

	ptra = stacka->head;
	ptra1 = stacka->head;
	while (ptra)
	{
		ptra->data.min = 0;
		ptra = ptra->next;
	}
	ptra = stacka->head;
	while (ptra)
	{
		if (ptra1->data.data > ptra->data.data)
		{
			ptra1 = ptra;
		}
		ptra = ptra->next;
	}
	ptra1->data.min = 1;
	ptra = stacka->head;
	if (ptra != ptra1)
		ensureminata_helper(stacka, flag);
}

int	issorted(t_Stack stack)
{
	t_Node	*ptr;
	t_Node	*ptr1;

	if (stacklength(stack) == 1)
	{
		freelinkedlist(&stack);
		return (1);
	}
	ptr = stack.head;
	ptr1 = ptr;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		if (ptr && ptr1->data.data > ptr->data.data)
			return (0);
		ptr1 = ptr;
	}
	freelinkedlist(&stack);
	return (1);
}

int	main(int argc, char **argv)
{
	turks(argc, argv, 1);
	return (0);
}
