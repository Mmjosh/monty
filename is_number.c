#include "monty.h"

/**
 * is_number - checks if a string is a valid number
 * @str: the string to check
 * Return: 1 if it's a valid No., 0 otherwise
 */
int is_number(const char *str)
{
	if (*str == '-' || *str == '+')
		str++;
	if (*str == '\0')
		return (0);

	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}
