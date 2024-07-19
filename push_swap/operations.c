// operations.c
#include "operations.h"
#include <stdio.h>

void sa(t_stack *a) {
    swap(a);
    printf("sa\n");
}

void sb(t_stack *b) {
    swap(b);
    printf("sb\n");
}

void ss(t_stack *a, t_stack *b) {
    swap(a);
    swap(b);
    printf("ss\n");
}

void pa(t_stack *a, t_stack *b) {
    if (!is_empty(b)) {
        push(a, pop(b));
        printf("pa\n");
    }
}

void pb(t_stack *a, t_stack *b) {
    if (!is_empty(a)) {
        push(b, pop(a));
        printf("pb\n");
    }
}

void ra(t_stack *a) {
    rotate(a);
    printf("ra\n");
}

void rb(t_stack *b) {
    rotate(b);
    printf("rb\n");
}

void rr(t_stack *a, t_stack *b) {
    rotate(a);
    rotate(b);
    printf("rr\n");
}

void rra(t_stack *a) {
    reverse_rotate(a);
    printf("rra\n");
}

void rrb(t_stack *b) {
    reverse_rotate(b);
    printf("rrb\n");
}

void rrr(t_stack *a, t_stack *b) {
    reverse_rotate(a);
    reverse_rotate(b);
    printf("rrr\n");
}
