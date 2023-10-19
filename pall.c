#include <stdio.h>
#include "monty.h"

/**
 * f_pall - Prints all the values on the stack.
 * @head: Double pointer to the head of the stack.
 * @line_number: Line number in the file.
 */
void f_pall(stack_t **head, unsigned int line_number)
{
    stack_t *current = *head;

    (void)line_number;

    while (current != NULL)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}

