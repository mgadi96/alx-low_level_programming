#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: the destination string
 * @src: the source string
 *
 * Return: destination string
 */
char *_strcat(char *dest, char *src)
{
	int dest_size = 0, i = 0;

	while (dest[dest_size] != '\0')
		dest_size++;

	while (src[i])
	{
		dest[dest_size] = src[i];
		dest_size++;
		i++;
	}

	return (dest);
}

