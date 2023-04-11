#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: the size of the array
 * Return: the copied string, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *new_str;
	int i, s_len;

	if (str == NULL)
		return (NULL);

	s_len = strlen(str);

	new_str = malloc(sizeof(char) * (s_len + 1));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < s_len; i++)
		new_str[i] = str[i];

	return (new_str);
}

