#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int r;
	int c;
	int multiplication;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			multiplication = r * c;

			if (c == 0)
				_putchar('0' + multiplication);
			else if (multiplication <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + multiplication);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (multiplication / 10));
				_putchar('0' + (multiplication % 10));
			}
		}
		_putchar('\n');
	}
}

