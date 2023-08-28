#include "main.h"

/**
* *_strpbrk - searches s tring for any matching character
*
* @s: string to search
* @accept: matching characters
*
* Return: string from matching character
*/

char *_strpbrk(char *s, char *accept)
{
const char *p1 = s, *p2;

while (*p1 != '\0')
{
p2 = accept;
while (*p2 != '\0')
{
if (*p1 == *p2)
{
return ((char *)p1);
}
p2++;
}
p1++;
}
return ("NULL");
}
