#include "main.h"
/**
 * stringLen - computes string length
 *
 * @s: string to compute length
 *
 * Return: length
 */

int stringLen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + stringLen(s + 1));
	}
}

/**
 * strncompare - compares two strings
 *
 * @s: string to compare
 * @i: iterator
 * @j: iterator
 *
 * Return: 1 if same, 0 otherwise
 */


int strncompare(char *s, int i, int j)
{
	if (*(s + i) == *(s + j))
	{
		if ((i == j) || (i == j + 1))
		{
			return (1);
		}
		else
		{
			return (0 + strncompare(s, i + 1, j - 1));
		}
	}
	return (0);
}
/**
 * is_palindrome - checks if a string is palindrome
 *
 * @s: string to check
 *
 * Return: 1 if true and 0 otherwise
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else
	{
		return (strncompare(s, 0, stringLen(s) - 1));
	}
}


