// push_swap.c
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "operations.h"

void free_stack(t_stack *stack) {
    while (!is_empty(stack)) {
        pop(stack);
    }
    free(stack);
}

void sort_stack(t_stack *a, t_stack *b) {
    // Implement your sorting algorithm here
    // This is a placeholder for the actual sorting algorithm
    // Use the operations defined earlier to sort the stack

    // Example (inefficient sorting logic for demonstration):
    while (!is_empty(a)) {
        pb(a, b); // Use pb operation
    }
    while (!is_empty(b)) {
        pa(a, b); // Use pa operation
    }
}

int main(int argc, char **argv) {
    if (argc < 2) {
        return 0;
    }

    t_stack *a = create_stack();
    t_stack *b = create_stack();

    for (int i = 1; i < argc; i++) {
        int value = atoi(argv[i]);
        push(a, value);
    }

    sort_stack(a, b);

    free_stack(a);
    free_stack(b);

    return 0;
}
