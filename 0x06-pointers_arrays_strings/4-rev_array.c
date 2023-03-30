#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: an array of ints
 * @n: the number of array's elements
 */
void reverse_array(int *a, int n)
{
	int i = 0, tmp;

	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
		i++;
	}
}

