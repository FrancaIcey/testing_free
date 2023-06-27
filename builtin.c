#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * _exit_command - A function to close the simple_shell when
 * @arg: pointer with the direction argument.
 * @lineptr: standard input string
 * @_exit: value of exit
 * Return: None
 */
void _exit_command(char **arg, char *lineptr, int _exit)
{
	if (arg[1] != NULL)
	{
		int exit_status = atoi(arg[1]);

		free(arg[1]);
		exit(exit_status);
	}

	free(arg);
	free(lineptr);
	exit(_exit);
}

/**
 *_getenv - A function to get all env
 *@env: enviroment
 *Return: 0
 */
void _getenv(char **env)
{
	size_t run = 0;

	while (env[run] != NULL)

	{
		size_t length = strlen(env[run]);

		write(STDOUT_FILENO, env[run], length);
		write(STDOUT_FILENO, "\n", 1);
		run++;
	}
}
