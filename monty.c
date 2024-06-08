#include "monty.h"

int v_a = 0;
/**
 * main - simple monty bytecode interpreter
 * @argc: argument count
 * @argv: stores all command line args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	FILE *file;
	char buffer[100];
	char *token;
	stack_t *stack = NULL;
	void (*f)(stack_t **stack, unsigned int line_number);

	if (argc < 2)
	{
		fprintf(stderr, "Usage: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((fgets(buffer, sizeof(buffer), file)) != NULL)
	{
		token = strtok(buffer, " \n");
		if (token == NULL)
			continue; /* skip empty lines */
		f = opcode_check(token);
		if (f == NULL)
		{
			fprintf(stderr, "L%d: Unknown instruction %s\n",  __LINE__, token);
			fclose(file);
			return (1);
		}
		token = strtok(NULL, " ");
		if (token != NULL)
			v_a = atoi(token);
		f(&stack, v_a);
	}

	return (0);
}
