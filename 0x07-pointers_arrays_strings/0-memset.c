#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the memory area to fill
 * @b: the constant byte
 * @n: the number of bytes to fill
 * Return: updated memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	for (count = 0; count < n; count++)
		s[count] = b;

	return (s);
}
