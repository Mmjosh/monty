#include "monty.h"

/**
 * opcode_check - checks if the given opcode is valid and returns the
 * corresponding function.
 * @opcod: the opcode to check
 * Return: pointer to the function that handles the opcode or NULL(if
 * not found)
 */
void (*opcode_check(char *opcod))(stack_t **stack, unsigned int line_number)
{
	int i;
	 /* f_op - array of structs of type `instruction_t` */
	static instruction_t f_op[] = {
			{"push", push},
			{"pall", pall},
			{NULL, NULL} /* sentinel val to mark end of array */
	};

	for (i = 0; f_op[i].opcode != NULL; i++)
	{
		if (strcmp(f_op[i].opcode, opcod) == 0)
		{
			return (f_op[i].f);
		}
	}

	return (NULL);
}
