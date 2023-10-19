/**
<<<<<<< HEAD
 * f_pop - Removes the top element of the stack.
 * @head: Double pointer to the head of the stack.
 * @line_number: Line number in the file.
 */
void f_pop(stack_t **head, unsigned int line_number)
=======
 * pop - Removes the top element from the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number where the pop opcode is encountered.
 */
int pop(stack_t **head, unsigned int line_number)
>>>>>>> 2f1433a9682d2050c1519f6cdc131b37ae5bdb6b
{
    stack_t *temp;

<<<<<<< HEAD
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
>>>>>>> 2f1433a9682d2050c1519f6cdc131b37ae5bdb6b
}
