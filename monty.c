#include "monty.h"

#define STACK 100

int stack[STACK];
int top = -1;

void push (int value)
{
	if (top < STACK -1)
	{
		stack[++top] = value
	}
	else
	{
		printf("Stack overflow\n");
		exit(EXIT_FAILURE)
	}
}

int pop()
{
	if (top >= 0)
	{
		return stack [top--];
	}
	else
	{
		printf("Stack is empty\n");
		exit(EXIT_FAILURE);
	}
}



