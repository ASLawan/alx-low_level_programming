#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *argstostr - concatenates all arguments to a program
 *
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: string if sucess, NULL if failure
 */

char *argstostr(int ac, char **av)
{
	int i, length = 0;
	char *new_string;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		length += strlen(av[i]);
	}

	new_string = (char *)malloc((length + ac) * sizeof(char));

	if (new_string == NULL)
	{
		free(new_string);
		return (NULL);
	}
	new_string[0] = '\0';

	for (i = 0; i < ac; i++)
	{
		strcat(new_string, av[i]);
		strcat(new_string, "\n");
	}
	return (new_string);

	free(new_string);
}
