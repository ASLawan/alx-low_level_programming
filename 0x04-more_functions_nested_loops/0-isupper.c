#include "main.h"

/**
 * _isupper - checks if uppercase letter
 *
 * @c: letter to be checked
 *
 * Return: uppercase letters
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
