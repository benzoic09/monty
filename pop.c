/**
 * f_pop - Removes the top element of the stack.
 * @head: Double pointer to the head of the stack.
 * @line_number: Line number in the file.
 */
void f_pop(stack_t **head, unsigned int line_number)
{
    stack_t *temp;

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
}
