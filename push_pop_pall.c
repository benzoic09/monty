#include "monty.h"


/**
 * pop - Removes the top element from the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number where the pop opcode is encountered.
 */
int pop(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	stack_t *temp = *stack;
	*stack = (*stack)->next;
	free(temp);
}

/**
 * pall - Prints all the values on the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number where the pall opcode is encountered.
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
