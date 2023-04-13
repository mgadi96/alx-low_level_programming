#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: the first value of the array
 * @max: the last value of the array
 *
 * Return: a pointer to the array of integers
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr != NULL)
	{
		for (i = 0; i < size; i++)
			arr[i] = min++;
	}

	return (arr);
}

