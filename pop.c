#include "monty.h"

/**
 * pop - Removes the top element from the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number where the pop opcode is encountered.
 * Return: 0
 */
int pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	*stack = (*stack)->next;
	free(temp);
	return (0);
}
