#include "monty.h"
#include <string.h>

#define INPUT_SIZE 50

/**
 * push - Pushes an element onto the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number where the push opcode is encountered.
 */
void push(stack_t **stack, unsigned int line_number)
{
	int value = 0;
	stack_t *new_node;
	char input[INPUT_SIZE];
	
	input[0] = '\0'; /* Initialize the input array with null character */
	
	if (!stack)
	{
		fprintf(stderr, "L%u: Error: stack not found\n", line_number);
		exit(EXIT_FAILURE);
	}

	/* Assuming you're getting the input string from somewhere, otherwise update this part accordingly */
	/* For example, if the input string is stored in a variable called 'input_string': */
	/* strcpy(input, input_string); */
	
	value = atoi(input);

	if (value == 0 && input[0] != '0')
	{
		fprintf(stderr, "L%u: Error: not a valid integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->next = *stack;
	new_node->prev = NULL;

	if (*stack)
		(*stack)->prev = new_node;

	*stack = new_node;
}
