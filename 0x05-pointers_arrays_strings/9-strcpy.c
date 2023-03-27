#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest
 *
 * @dest: a pointer to string
 * @src: another string pointer
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

