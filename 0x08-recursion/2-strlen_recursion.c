#include "main.h"

/**
 * _strlen_recursion - computes string length
 *
 * @s: string to comute length from
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int counter;

	if (*s != '\0')
	{
		counter  = 1 +  _strlen_recursion(s + 1);
	}
	return (counter);

}
