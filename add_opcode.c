#include "monty.h"

/**
 * add - adds the top 2 elements of the stack
 * @stack: pointer to pointer pointing to head of stack
 * @line_number: current line number in the bytecode file
 * Return: nothing
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	(*stack)->next->n += (*stack)->n;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;

	free(temp);
}
