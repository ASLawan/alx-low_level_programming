#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowerAlpha[26] = "abcdefghijklmnopqrstuvwxyz";
	char upperAlpha[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int j;

	for (j = 0; j < 26; j++)
	{
		putchar(lowerAlpha[j]);
	}
	for (j = 0; j < 26; j++)
	{
		putchar(upperAlpha[j]);
	}
	putchar('\n');

	return (0);
}
