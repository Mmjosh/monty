#include "monty.h"

/**
 * pall - prints all the values on the stack, starting from the top
 * @stack: pointer to the head of the stack
 * @line_number: current line number(unused)
 * Return: nothing
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	(void)line_number;

	current = *stack;

	while (current != NULL)
	{
		printf(" %d", current->n);
		current = current->next;
	}
	printf("\n");
}
