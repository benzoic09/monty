#include "monty.h"
#include <stdio.h>

/**
 * main - Entry point for Monty interpreter
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure
 */
int main(int argc, char *argv[])
{
	stack_t *stack = NULL;
	char *line = NULL;
	size_t len = 0;
	FILE *file;
	unsigned int line_number = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (getline(&line, &len, file) != -1)
	{
		line_number++;
		process_instruction(&stack, line, line_number);
	}

	fclose(file);
	free_stack(stack);
	free(line);

	return (EXIT_SUCCESS);
}
