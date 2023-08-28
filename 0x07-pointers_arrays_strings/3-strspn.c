#include "main.h"

/**
 * _strspn - get the lenth of a prefix substring
 *
 * @s: string
 * @accept: substring
 *
 * Return: length of substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, counter = 0, found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found == 1)
		{
			counter += 1;
		}
		else
		{
			break;
		}
	}
	return (counter);
}
