#include "monty.h"

/**
 * pint - prints the value at the top of the stack
 * @stack: pointer that points to the head of the stack
 * @line_number: reports an error[current line No. in the bytecode file]
 * Return: nothing
 */
void pint(stack_t **stack, unsigned int line_number)
{
	/* if the stack is empty, exit with status: `EXIT_FAILURE` */
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	/* print it's value */
	printf("%d\n", (*stack)->n);

}
