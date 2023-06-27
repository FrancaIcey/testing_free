#include "main.h"

/**
 * _strchr - To locate the first occurrence of a character in a string.
 * @s: The string to search.
 * @c: The character to locate.
 *
 * Return: A pointer to the located character,
 *         or NULL if the character is not found.
 */
char *_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

/**
 * _strspn - calculates the length of the initial segment of a string
 * consisting of only the characters in a specified set.
 * @s1: The string to be scanned.
 * @s2: The string containing the characters to match.
 *
 * Return: The length of the initial segment of s1 containing only
 *         characters from s2.
 */
size_t _strspn(const char *s1, const char *s2)
{
	size_t len = 0;

	while (*s1 != '\0' && _strchr(s2, *s1) != NULL)

	{
		len++;
		s1++;
	}
	return (len);
}
/**
 * _strcspn - To calculates the length of the initial segment of a string
 * consisting of only the characters not in a specified set.
 * @s1: The string to be scanned.
 * @s2: The string containing the characters to avoid.
 *
 * Return: The length of the initial segment of s1 containing
 *         characters not in s2.
 */
size_t _strcspn(const char *s1, const char *s2)
{
	size_t len = 0;

	while (*s1 != '\0' && _strchr(s2, *s1) == NULL)

	{
		len++;
		s1++;
	}
	return (len);
}

/**
 * _strtok - To break a string into a sequence of tokens.
 * @str: The string to be parsed.
 * @delim: The string containing the delimiter characters.
 *
 * Return: A pointer to the next token, or NULL if there are no more tokens.
 */
char *_strtok(char *str, const char *delim)
{
	static char *p;

	if (str != NULL)
		p = str;
	else if (p == NULL)

	return (NULL);

	char *start = p + _strspn(p, delim);

	p = start + _strcspn(start, delim);

	if (*p != '\0')
		*p++ = '\0';
	else
		p = NULL;

	return (start);
}
