#include "main.h"

/**
 * *_strchr - locates a character in a string
 *
 * @s: the string to check in
 * @c: the character to look for
 *
 * Return: character if found or NULL if not
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		s++;
	}
	return ("NULL");
}
