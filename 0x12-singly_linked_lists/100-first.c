#include <stdio.h>

/**
 * run_before_main - to run before the main function
 */
void __attribute__((constructor)) run_before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

