#include "monty.h"

/**
 * add - Adds the top two elements of the stack.
 * @head: Double pointer to the head of the stack.
 * @line_number: Line number in the file.
 */
void add(stack_t **head, unsigned int line_number)
{
	int sum;
	
	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		 exit(EXIT_FAILURE);
	}

	sum = (*head)->n + (*head)->next->n;
	f_pop(head);
	(*head)->n = sum;
}
