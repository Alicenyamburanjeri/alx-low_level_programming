#include "main.h"

/**
 * leet - changes a string to 1337 format
 * @s: char pointer
 * Return: 0
 */

char *leet(char *s)
{
	char alph[5][2] = {{'a', 'A'}, {'e', 'E'},
		{'o', 'O'}, {'t', 'T'}, {'l', 'L'}};
	char nums[5] = {'4', '3', '0', '7', '1'};
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (alph[j][0] == s[i] || alph[j][1] == s[i])
				s[i] = nums[j];
		}
		i++;
	}
	return (s);
}
