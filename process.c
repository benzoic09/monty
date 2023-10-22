#include "monty.h"
/**
 * process_instruction - Processes the instruction of the Monty bytecode.
 * @stack: Double pointer to the head of the stack.
 * @instruction: Instruction to be processed.
 * @line_number: Line number where the instruction is encountered.
 * Return: 1t on success, 0 on failure.
 */
int process_instruction(stack_t **stack, char *instruction, unsigned int line_number)
{
	char *opcode = strtok(instruction, " \n\t");
	char *argument = strtok(NULL, " \n\t");

	if (!opcode)
	{
		fprintf(stderr, "L%u: invalid instruction\n", line_number);
		return 0;
	}

	if (strcmp(opcode, "push") == 0)
	{
		if (!argument)
		{
			fprintf(stderr, "L%u: usage: push integer\n", line_number);
			return 0;
		}

		push(stack, line_number);
	}
	else if (strcmp(opcode, "pop") == 0)
	{
		if (!*stack)
		{
			fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
			return 0;
		}
		f_pop(stack);
	}
	else if (strcmp(opcode, "pall") == 0)
	{
		pall(stack);
	}
	else
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
		return (0);
	}

	return (1);
}
