#include "main.h"

/**
 * _get_token - a function that get a token of string and split it
 * @lineptr: command from the user
 * Return: pointer to array of tokens
 */
char **_get_token(char *lineptr)
{
	char **user_command = NULL;
	char *token = NULL;
	size_t i = 0;

	int token_count;
	if (lineptr == NULL)
		return NULL;

	token_count = _strlen(lineptr) - _strlen(_strtok(lineptr, " \n\t\r")) + 1;
	if (token_count <= 1)
		return NULL;

	user_command = malloc(sizeof(char *) * (token_count + 1));
	if (user_command == NULL)
		return NULL;

	token = _strtok(lineptr, " \n\t\r");
	for (i = 0; token_count -1; i++)
	{
		user_command[i] = token;
		token = _strtok(NULL, " \n\t\r");
	}
	user_command[i] = NULL;

	return user_command;
}
