#include "main.h"

/**
 * _strstr - function finds the first occurrence
 *  of the substring needle in the string haystack
 *  @haystack: main C string to scanned
 *  @needle:small string to be searched within
 *  haystack
 *  Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int x;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		x = 0;

		if (haystack[x] == needle[x])
		{
			do {
				if (needle[x + 1] == '\0')
					return (haystack);
				x++;
			}
			while (haystack[x] == needle[x]);
		}
		haystack++;
	}
	return ('\0');
}
