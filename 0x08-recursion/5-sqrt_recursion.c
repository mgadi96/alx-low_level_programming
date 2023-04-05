#include "main.h"

/**
 * _sqrt - looks for the square root of a number
 * @n: a number
 * @root: a square root
 * Return: the natural square root of a number or -1 if not possible
 */
int _sqrt(int n, int root)
{
	int result;

	if (root * root > n)
		result = -1;
	else if (root * root == n)
		result = root;
	else
		result = _sqrt(n, ++root);

	return (result);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to calculate the natural square root of
 * Return: the natural square root of a number or -1 if not possible
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

