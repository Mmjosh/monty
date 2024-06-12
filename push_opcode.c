#include "monty.h"

/**
 * push - pushes an element onto the top of the stack
 * @stack: pointer to the head of the stack.
 * @line_number: line number from the file where the instruction was read.
 * Return: nothing
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_element;
	int value;

	value = atoi(v_a);

	if (v_a == NULL || ((value == 0 && strcmp(v_a, "0") != 0)))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	new_element = malloc(sizeof(stack_t));
	if (new_element == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_element->n = value;
	new_element->prev = NULL;
	new_element->next = *stack;

	if (*stack != NULL)
	{
		(*stack)->prev = new_element;
	}

	*stack = new_element;
}
