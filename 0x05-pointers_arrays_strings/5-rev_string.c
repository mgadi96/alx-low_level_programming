#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: a pointer to char
 *
 * Return: void
 */
void rev_string(char *s)
{
	int s_length = 0, i;
	char swap_var;

	while (s[s_length] != '\0')
		s_length++;

	for (i = 0; i < s_length / 2; i++)
	{
		swap_var = s[i];
		s[i] = s[s_length - i - 1];
		s[s_length - i - 1] = swap_var;
	}
}

