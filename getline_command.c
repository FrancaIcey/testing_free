#include "main.h"

/**
 * _getline_command - print "#cisfun$ " and wait for the user to input a command
 * Return: line of string input from the user
 */
char *_getline_command(void)
{
	char *lineptr = NULL;
	size_t buffer_size = 0;

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "#cisfun$ ", 9);

	if (getline(&lineptr, &buffer_size, stdin) == -1)
	{
		free(lineptr);
		return (NULL);
	}

	return (lineptr);
}

