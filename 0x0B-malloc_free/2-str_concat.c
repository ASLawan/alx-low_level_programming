#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;


	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	ptr = malloc(strlen(s1) + strlen(s2) + 1);
	strcpy(ptr, s1);
	strcat(ptr, s2);
	return (ptr);
}
