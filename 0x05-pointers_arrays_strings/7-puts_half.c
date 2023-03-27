#include "main.h"

/**
 * puts_half - prints the second half of a string
 *
 * @str: a pointer to char
 *
 * Return: void
 */
void puts_half(char *str)
{
	int str_length = 0, init, i;

	while (str[str_length] != '\0')
		str_length++;

	if (str_length % 2 == 0)
		init = str_length / 2;
	else
		init = (str_length + 1) / 2;

	for (i = init; i < str_length; i++)
		_putchar(str[i]);

	_putchar('\n');
}

