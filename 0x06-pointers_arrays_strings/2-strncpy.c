#include "main.h"

/**
 * _strncpy - copy from one string to another
 *
 * @dest: dest string
 * @src: src string
 * @n: number of chars to copy
 *
 * Return: the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
