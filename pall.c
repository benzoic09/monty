#include "monty.h"


/**
 * pall - Prints all the values on the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number where the pall opcode is encountered.
 * Return: 0
 */
int pall(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack)
		return;

	stack_t *current = *stack;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
