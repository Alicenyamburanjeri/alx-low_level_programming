#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: is a pointer to a char
 * @accept: is a pointer to a char
 *
 * Return: Returns the transformed pointer
 *
**/

unsigned int _strspn(char *s, char *accept)
{
int i, j, flag;
unsigned int cnt = 0;
for (i = 0; s[i] != 0; i++)
{
flag = 0;
for (j = 0; accept[j] != 0; j++)
{
if (s[i] == accept[j])
{
flag = 1;
cnt++;
}
}
if (flag == 0)
break;
}
return (cnt);
}
