#include <stddef.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: the string to check in
 * @c: the char to look for
 *
 * Return: first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}

