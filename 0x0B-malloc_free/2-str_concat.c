#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: the string 1
 * @s2: the string 2
 * Return: the concatenated string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int s1_len, s2_len, i, index = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	new_str = malloc(sizeof(char) * (s1_len + s2_len + 1));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		new_str[index++] = s1[i];

	for (i = 0; i < s2_len; i++)
		new_str[index++] = s2[i];

	return (new_str);
}

