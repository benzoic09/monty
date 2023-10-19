#include "monty.h"

/**
<<<<<<< HEAD
 * pop - Removes the top element from the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number where the pop opcode is encountered.
 * Return: no return
=======
 * f_pop - Removes the top element of the stack.
 * @head: Double pointer to the head of the stack.
 * @line_number: Line number in the file.
>>>>>>> 902c94c0e32b9f7159ce6dceb42d8d8a7cdf865f
 */
void f_pop(stack_t **head, unsigned int line_number)
{
    stack_t *temp;

<<<<<<< HEAD
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
		free_stack(*head);
	}


		temp = *head;
		*head = temp->next;
		 free(temp);
=======
    if (*head == NULL)
    {
        fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
        exit(EXIT_FAILURE);
    }

    if ((*head)->next)
    {
        temp = *head;
        *head = (*head)->next;
        (*head)->prev = NULL;
        free(temp);
    }
    else
    {
        free(*head);
        *head = NULL;
    }
>>>>>>> 902c94c0e32b9f7159ce6dceb42d8d8a7cdf865f
}
