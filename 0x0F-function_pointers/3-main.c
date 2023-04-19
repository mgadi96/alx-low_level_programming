#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - prints the name of the file it was compiled from
 *
 * @argc: the number of args
 * @argv: the array of args
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int n1, n2;
	char *op;
	int (*op_function)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	op = argv[2];
	n2 = atoi(argv[3]);
	op_function = get_op_func(op);

	if (op_function == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if (n2 == 0 && (op[0] == '/' || op[0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op_function(n1, n2));

	return (0);
}

