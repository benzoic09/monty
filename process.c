#include "monty.h"

int process_instruction(stack_t **stack, char *instruction, unsigned int line_number)
{
	char *opcode = strtok(instruction, " \n\t");
	char *argument = strtok(NULL, " \n\t");
	int value;

	if (!opcode)
	{
		fprintf(stderr, "L%u: invalid instruction\n", line_number);
		return (0);
	}


	if (strcmp(opcode, "push") == 0)
	{
		if (argument)
		{
			fprintf(stderr, "L%u: usage: push integer\n", line_number);
			return (0);
		}

		value = atoi(argument);
		push(stack, value);
	}

	else if (strcmp(opcode, "pop") == 0)
	{
		if (!f_pop(stack))
		{
			fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
			return (0);
		}
	}

	else if (strcmp(opcode, "pall") == 0)
	{
		pall(stack);
	}
	
	else if (strcmp(opcode, "swap") == 0)
	{
		f_swap(stack, line_number);
	}

	else
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
		return (0);
	}

	return (1);
}
