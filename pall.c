#include "monty.h"


/**
 * pall - Prints all the values on the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number where the pall opcode is encountered.
 * Return: no return
 */
int pall(stack_t **stack)
{
	stack_t *current;

	if (!stack || !*stack)
		return (0);

	current = *stack;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
	return (0);
}
