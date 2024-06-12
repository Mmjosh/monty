#include "monty.h"

/**
 * swap - swaps the top two elements of the stack
 * @stack: pointer to pointer pointing to the head of the stack
 * @line_number: current line number in the bytecode file
 * Return: nothing
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second;
	int temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	first = *stack;
	second = (*stack)->next;

	/* swapping the values */
	temp = first->n;
	first->n = second->n;
	second->n = temp;
}
