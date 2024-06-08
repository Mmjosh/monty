#include "monty.h"

/**
 * push - pushes an element onto the top of the stack
 * @stack: pointer to the head of the stack.
 * @line_number: data to be inserted in the new element.
 * Return: nothing
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_element = (stack_t *)malloc(sizeof(stack_t));

	(void)line_number;
	if (new_element == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_element->n = v_a;
	new_element->prev = NULL;

	if (*stack != NULL)
	{
		new_element->next = *stack;
		(*stack)->prev = new_element;
	}
	else
	{
		new_element->next = NULL;
	}

	*stack = new_element;
}
