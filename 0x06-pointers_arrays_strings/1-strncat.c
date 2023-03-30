#include "main.h"

/**
 * _strncat - concatenates n chars from src string to dest
 *
 * @dest: the destination string
 * @src: the source string
 * @n: # of characters to append
 *
 * Return: destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_size = 0, i = 0;

	while (dest[dest_size] != '\0')
		dest_size++;

	while (src[i] && i < n)
	{
		dest[dest_size] = src[i];
		dest_size++;
		i++;
	}

	return (dest);
}
