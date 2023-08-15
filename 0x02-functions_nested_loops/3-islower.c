#include "main.h"

/**
 * _islower - checks if a letteris in lowercase
 *
 * @c: ascii value of letter given
 *
 * Return: 1 if the lowercase and 0 if not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
