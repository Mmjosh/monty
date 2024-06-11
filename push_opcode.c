#include "monty.h"

/**
 * push - pushes an element onto the top of the stack
 * @stack: pointer to the head of the stack.
 * @line_number: line number from the file where the instruction was read.
 * Return: nothing
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_element = (stack_t *)malloc(sizeof(stack_t));

	if (new_element == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	if ((v_a && (atoi(v_a) != 0)) || strcmp(v_a, "0") == 0)
	{
		new_element->n = atoi(v_a);
		new_element->prev = NULL;
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer", line_number);
		free(new_element);
		exit(EXIT_FAILURE);
	}

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
