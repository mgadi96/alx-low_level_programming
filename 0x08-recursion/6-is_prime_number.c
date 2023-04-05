#include "main.h"

/**
 * is_prime - checks if a number is a prime number
 * @n: a number
 * @div: a divisor
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime(int n, int div)
{
	int result;

	if (n % div == 0)
		result = 0;
	else if (div == n / 2)
		result = 1;
	else
		result = is_prime(n, div + 1);

	return (result);
}

/**
 * is_prime_number - checks if a number is a prime number
 * @n: the number to check
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	int result;

	if (n <= 1)
		result = 0;
	else if (n <= 3)
		result = 1;
	else
		result = is_prime(n, 5);

	return (result);
}

