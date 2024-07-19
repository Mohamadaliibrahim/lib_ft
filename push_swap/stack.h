// stack.h
#ifndef STACK_H
#define STACK_H

typedef struct s_node {
    int value;
    struct s_node *next;
} t_node;

typedef struct s_stack {
    t_node *top;
} t_stack;

t_stack *create_stack(void);
void push(t_stack *stack, int value);
int pop(t_stack *stack);
void swap(t_stack *stack);
void rotate(t_stack *stack);
void reverse_rotate(t_stack *stack);
void print_stack(t_stack *stack);
int is_empty(t_stack *stack);
int stack_size(t_stack *stack);

#endif
