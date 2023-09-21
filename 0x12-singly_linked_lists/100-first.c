#include <stdio.h>

/**
 * print_message - executes before main function
 *
 * Return: nothing
 */

void __attribute__((constructor)) print_message()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
