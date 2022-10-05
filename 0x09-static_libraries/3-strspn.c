#include "main.h"
<<<<<<< HEAD
/**
*_strspn - search the number of bytes in the initial
* segment of s which consist only of bytes from accept
*@s:segment targeted
*@accept:reference bytes container
*
*Return:returns the number of bytes in the initial
* segment of s which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				bytes++;
				break;
			}
			else if ((accept[i + 1]) == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
=======

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
>>>>>>> 541acbebf774f3283784335495d080035b099aad
}
