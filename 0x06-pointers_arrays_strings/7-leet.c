#include "main.h"

/**
 * leet - encodes a string
 * @s: a string
 * Return: encoded string
 */
char *leet(char *s)
{
	int i = 0, j;

	char letters[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char nums[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (s[i])
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (s[i] == letters[j])
				s[i] = nums[j];
			j++;
		}
		i++;
	}

	return (s);
}

