#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: a multi-dim. array
 * @size: the 1st dim. array size
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = size - 1;
	int left_diag_sum = 0, right_diag_sum = 0;
	int matrix_size = size * size;

	while (i < matrix_size)
	{
		left_diag_sum += a[i];
		i += (size + 1);
	}

	while (j <= (matrix_size - size))
	{
		right_diag_sum += a[j];
		j += (size - 1);
	}

	printf("%d, %d\n", left_diag_sum, right_diag_sum);
}

