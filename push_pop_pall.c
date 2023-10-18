#include "monty.h"

#define STACK 100

/**
 * push - Pushes an element onto the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number where the push opcode is encountered.
 */
void push(stack_t **stack, unsigned int line_number)
{
	int value = 0;
	if (!stack)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	 stack_t *new_node = malloc(sizeof(stack_t));
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
