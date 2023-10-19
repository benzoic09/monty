#include "monty.h"
/**
 * f_swap - Swaps the top two elements of the stack.
 * @head: Double pointer to the head of the stack.
 * @line_number: Line number in the file.
 */
void f_swap(stack_t **head, unsigned int line_number)
{
    stack_t *temp;

    if (*head == NULL || (*head)->next == NULL)
    {
        fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    temp = (*head)->next;
    (*head)->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = *head;
    temp->prev = NULL;
    temp->next = *head;
    (*head)->prev = temp;
    *head = temp;
}

