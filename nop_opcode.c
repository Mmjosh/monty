#include "monty.h"

/**
 * nop - doesn't do anything
 * @stack: pointer to pointer pointing to head of stack
 * @line_number: current line number in the bytecode file
 * Return: nothing
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
