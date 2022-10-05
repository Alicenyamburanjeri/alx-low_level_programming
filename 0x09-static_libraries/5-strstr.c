#include "main.h"
<<<<<<< HEAD
/**
*_strstr - The _strstr() function finds the first occurrence
* of the substring needle in the string haystack.
* The terminating null bytes (\0) are not compared
*@haystack: string where the search is made
*@needle: string whose occurence is searched in haystack
*Return:Returns a pointer to the beginning of the located
* substring, or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
=======

/**
 * _strstr - funtion locates a substring.
 *
 * @haystack:  This is the main C string to be scanned.
 * @needle: This is the small string to be searched with-in haystack string.
 *
 * Return: Returns the transformed pointer.
 *
**/
char *_strstr(char *haystack, char *needle)
{
int i;

for (i = 0; haystack[i]; i++)
if (haystack[i] == needle[0])
return (haystack + i);

if (haystack[i] == needle[0])
return (haystack + i);

return (0);
>>>>>>> 541acbebf774f3283784335495d080035b099aad
}
