/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshehab <hshehab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 17:26:22 by hshehab           #+#    #+#             */
/*   Updated: 2024/07/08 14:45:43 by hshehab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "printf/ft_printf.h"

typedef struct s_element{
	int				data;
	int				price;
	int				abovemedian;
	int				cheapest;
	int				index;
	int				min;
	struct Node		*target;
}	t_element;

typedef struct Node
{
	t_element				data;
	struct Node				*previous;
	struct Node				*next;
}t_Node;

typedef struct Stack
{
	t_Node	*head;
	t_Node	*tail;
}t_Stack;

t_Node		*create_node(t_element data);
t_Stack		*create_stack(void);
int			push_node_top(t_Stack *s, t_element data);
int			push_node_bottom(t_Stack *s, t_element data);
int			delete_top(t_Stack *s);
int			isempty(t_Stack s);
int			top(t_Stack s, t_element *value);
int			bottom(t_Stack s, t_element *value);
int			delete_bottom(t_Stack *s);
int			sa(t_Stack *s, int flag);
int			sb(t_Stack *s, int flag);
int			ss(t_Stack *a, t_Stack *b, int flag);
int			rrb(t_Stack *s, int flag);
int			rra(t_Stack *s, int flag);
int			rrr(t_Stack *a, t_Stack *b, int flag);
int			ra(t_Stack *s, int flag);
int			rb(t_Stack *s, int flag);
int			rr(t_Stack *a, t_Stack *b, int flag);
int			pa(t_Stack *a, t_Stack *b, int flag);
int			pb(t_Stack *a, t_Stack *b, int flag);
int			integercheck_single(char *str);
int			stacklength(t_Stack s);
int			beforemedian(t_Stack s);
void		setprices(t_Stack *s);
void		setcheapest(t_Stack *b);
void		resetcheapest(t_Stack *a, t_Stack *b);
void		findmaxtarget(t_Node *ptrb, t_Stack *a);
void		targetingmax(t_Stack *a, t_Stack *b);
int			case5helper(t_Stack *s, int flag);
int			case34helper(t_Stack *s, int flag);
int			case12helper(t_Stack *s, int flag);
int			sortthree(t_Stack *s, int flag);
int			isontop(t_Stack s, int e);
void		sort1(t_Stack *a, t_Stack *b, int flag);
void		sort2(t_Stack *a, t_Stack *b, int flag);
void		sort3(t_Stack *a, t_Stack *b, int flag);
void		sort4(t_Stack *a, t_Stack *b, int flag);
void		taketotop(t_Stack *a, t_Stack *b, int flag);
int			read_1str_push_a(char *str, t_Stack *s);
int			read_multistr_push_a(char **str, t_Stack *s);
void		setindex(t_Stack *a, t_Stack *b);
void		setabovemedian(t_Stack *s);
void		findthemin(t_Node *ptrb, t_Stack *stacka);
void		targetingfrombtoa(t_Stack *stacka, t_Stack *stackb);
void		turks(int argc, char **argv, int flag);
void		turks_helper2(t_Stack *stacka, t_Stack *stackb, int flag);
void		turks_helper1(t_Stack *stacka, t_Stack *stackb, int flag);
void		ensureminata(t_Stack *stacka, int flag);
void		ensureminata_helper(t_Stack *stacka, int flag);
char		**ft_split(char *s, char c);
long		ft_atoi( char *nptr);
void		printstack(t_Stack stack);
void		resetabovemedian(t_Stack *a, t_Stack *b);
void		freelinkedlist(t_Stack *stack);
void		freestacks(t_Stack *stacka, t_Stack *stackb);
void		minisort(t_Stack *stack, int flag);
void		freematrix(char **matrix);
int			duplicates(char **str);
int			ft_strcmp(const char *s1, const char *s2);
int			initialize_stacks(int argc, char **argv, t_Stack **a, t_Stack **b);
int			main(int argc, char **argv);
int			issorted(t_Stack stack);
void		printstack(t_Stack stack);

#endif
