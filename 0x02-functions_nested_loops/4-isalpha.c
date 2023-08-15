#include "main.h"

/**
 * _isalpha - checks if character is an alphabet
 *
 * @c: ascii value of the character to check
 *
 * Return: 1 if is alphabet and 0 if its not
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
