#include "monty.h"

/**
 * f_pop - Removes the top element of the stack.
 * @head: Double pointer to the head of the stack.
 * @line_number: Line number in the file.
 */
int f_pop(stack_t **stack)
{
	stack_t *temp;
	
	if (*stack == NULL)
    	{
		return (0);
	}

    if ((*stack)->next)
    {
        temp = *stack;
        *stack = (*stack)->next;
        (*stack)->prev = NULL;
        free(temp);
    }

    return (1);
}
