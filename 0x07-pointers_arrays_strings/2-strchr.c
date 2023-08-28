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
	/*int i;*/

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ("NULL");
}
