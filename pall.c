#include <stdio.h>
#include "monty.h"

/**
 * f_pall - Prints all the values on the stack.
 * @head: Double pointer to the head of the stack.
 * @line_number: Line number in the file.
 */
void pall(stack_t **stack)
{
	stack_t *current = *stack;

	if (!stack || !*stack)
		return;


	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
