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
	int i;

	for (i = 0; haystack[i]; i++)
		if (haystack[i] == needle[0])
			return (haystack + i);

	if (haystack[i] == needle[0])
		return (haystack + i);

	return (0);
}
