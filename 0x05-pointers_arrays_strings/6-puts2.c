#include "main.h"

/**
 * puts2 - prints every other character of a string
 * (starting with the first character)
 *
 * @str: a pointer to char
 *
 * Return: void
 */
void puts2(char *str)
{
	int s_length = 0, i;

	while (str[s_length] != '\0')
		s_length++;

	for (i = 0; i < s_length; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}

