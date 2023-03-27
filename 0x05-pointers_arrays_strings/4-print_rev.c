#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: a pointer to char
 *
 * Return: void
 */
void print_rev(char *s)
{
	int s_length = 0, i;

	while (s[s_length] != '\0')
		s_length++;

	for (i = s_length - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}

