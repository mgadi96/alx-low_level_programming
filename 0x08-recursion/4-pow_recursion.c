#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base number
 * @y: exponent number
 * Return: the value of x to the power of y
 */
int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
		result = -1;
	else if (y == 0)
		result = 1;
	else if (y == 1)
		result = x;
	else
		result = x * _pow_recursion(x, (y - 1));

	return (result);
}

