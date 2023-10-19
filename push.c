#include "monty.h"

/**
 * push - Pushes an element onto the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number where the push opcode is encountered.
 */
void push(stack_t **stack, unsigned int line_number)
{
	int value;
	stack_t *new_node;
	char *value_str = strtok(NULL, " \n\t");

	if (!value_str)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	value = atoi(value_str);

	new_node = malloc(sizeof(stack_t));

		if (!new_node)
		{
			fprintf(stderr, "Error: malloc failed\n");
			exit(EXIT_FAILURE);
		}

		if (!value)
		{
			fprintf(stderr, "L%u: usage: push integer\n", line_number);
			free(new_node);
			exit(EXIT_FAILURE);
		}

	new_node->n = value;
	new_node->next = *stack;
	new_node->prev = NULL;

		if (*stack)
			(*stack)->prev = new_node;

	*stack = new_node;
}
