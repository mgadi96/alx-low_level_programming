#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: the string 1
 * @s2: the string 2
 * @n: number of bytes to copy
 *
 * Return: a pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int s2_size = strlen(s2), i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= s2_size)
		n = s2_size;

	ptr = malloc(sizeof(*ptr) + (strlen(s1) + n + 1));

	if (ptr != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			ptr[i] = s1[i];

		for (j = 0; j < n; j++)
			ptr[i + j] = s2[j];

		ptr[i + j] = '\0';
	}

	return (ptr);
}

