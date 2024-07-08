/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_implementation4.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshehab <hshehab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 21:49:52 by hshehab           #+#    #+#             */
/*   Updated: 2024/07/03 19:09:02 by hshehab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	rb(t_Stack *s, int flag)
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
			ft_printf("rb\n");
		return (1);
	}
	return (0);
}

int	rr(t_Stack *a, t_Stack *b, int flag)
{
	if (ra(a, 0), rb(b, 0), flag)
	{
		ft_printf("rr\n");
		return (1);
	}
	return (0);
}

int	integercheck_single(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9') || str[i] == '-' || str[i] == ' ')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
