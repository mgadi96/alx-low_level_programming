#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: a pointer to char
 *
 * Return: the length of the string s
 */
int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

