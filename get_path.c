#include "main.h"

/**
 * _get_path - a function that get a variable PATH to use it.
 * @env: environment variable
 * Return: value of PATH.
 */
char *_get_path(char **env)
{
	size_t index;
	char *path = NULL;

	for (index = 0; env[index] && _strncmp(env[index], "PATH=", 5); index++)
		;

	if (env[index] == NULL)

		return (NULL);

	size_t length = _strlen(env[index]) - 4;

	path = malloc(sizeof(char) * (length + 1));

	if (path == NULL)
		return (NULL);

	_strcpy(path, env[index] + 5);
	return (path);
}
