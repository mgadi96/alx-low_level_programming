#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: an integer
 */
void print_to_98(int n)
{
	while (n > 98 || n < 98)
	{
		printf("%d, ", n);

		if (n < 98)
			n++;
		else
			n--;
	}

	if (n == 98)
		printf("%d", n);

	printf("\n");
}

