#include "main.h"

/**
 * *rot13 - rotate character 13 places
 *
 * @s: input string
 *
 * Return: ciphered text
 */

char *rot13(char *s)
{
	int i, rot;

	rot  = 13;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if ((s[i] + rot) <= 122)
			{
				s[i] += rot;
			}
			else
			{
				s[i] -= rot;
			}
		}
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			if ((s[i] + rot) <= 90)
			{
				s[i] += rot;
			}
			else
			{
				s[i] -= rot;
			}
		}

	}
	return (s);
}
