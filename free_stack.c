#include "monty.h"

/**
 * free_stack - frees a `stack_t` list
 * @stack: head of the stack
 */
void free_stack(stack_t *stack)
{
	stack_t *tmp;

	while (stack != NULL)
	{
		tmp = stack;
		stack = stack->next;
		free(tmp);
	}
}
