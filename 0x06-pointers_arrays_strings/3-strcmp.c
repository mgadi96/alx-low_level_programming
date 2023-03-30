#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: s1 string
 * @s2: s2 string
 *
 * Return: chars diff between s1 & s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

