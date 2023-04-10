#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: the arguments count
 * @argv: the arguments list
 * Return: 0 or 1 if the number args is different than 2
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Erorr\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}

