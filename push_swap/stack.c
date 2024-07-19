// stack.c
#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

t_stack *create_stack(void) {
    t_stack *stack = (t_stack *)malloc(sizeof(t_stack));
    stack->top = NULL;
    return stack;
}

void push(t_stack *stack, int value) {
    t_node *new_node = (t_node *)malloc(sizeof(t_node));
    new_node->value = value;
    new_node->next = stack->top;
    stack->top = new_node;
}

int pop(t_stack *stack) {
    if (stack->top == NULL) return -1; // Stack underflow
    t_node *temp = stack->top;
    int value = temp->value;
    stack->top = stack->top->next;
    free(temp);
    return value;
}

void swap(t_stack *stack) {
    if (stack->top && stack->top->next) {
        t_node *first = stack->top;
        t_node *second = stack->top->next;
        first->next = second->next;
        second->next = first;
        stack->top = second;
    }
}

void rotate(t_stack *stack) {
    if (stack->top && stack->top->next) {
        t_node *first = stack->top;
        t_node *temp = stack->top;
        while (temp->next) {
            temp = temp->next;
        }
        stack->top = first->next;
        first->next = NULL;
        temp->next = first;
    }
}

void reverse_rotate(t_stack *stack) {
    if (stack->top && stack->top->next) {
        t_node *prev = NULL;
        t_node *curr = stack->top;
        while (curr->next) {
            prev = curr;
            curr = curr->next;
        }
        curr->next = stack->top;
        stack->top = curr;
        prev->next = NULL;
    }
}

void print_stack(t_stack *stack) {
    t_node *current = stack->top;
    while (current) {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}

int is_empty(t_stack *stack) {
    return stack->top == NULL;
}

int stack_size(t_stack *stack) {
    int size = 0;
    t_node *current = stack->top;
    while (current) {
        size++;
        current = current->next;
    }
    return size;
}
