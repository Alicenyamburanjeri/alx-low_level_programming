#include "main.h"

/**
 * cap_string - function that capitalizes all
 * words of a string.
 * @s: char pointer
 * Return: 0
 */

char *cap_string(char *s)
{
	int i = 0, flag = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '\t' || s[i] == '\n' || s[i] == ' ' || s[i] == ',' || s[i] == ';'
				|| s[i] == '.' || s[i] == '!' || s[i] == '"' || s[i] == '(' || s[i]
				|| s[i] == ')' || s[i] == '{' || s[i] == '}')
			flag = 1;
		else if ((s[i] >= 97 && s[i] <= 122 && flag == 1)
		|| (s[0] >= 97 && s[0] <= 122))
		{
			s[i] -= 32;
			flag = 0;
		}
		else
			flag = 0;
		i++;
	}
	return (s);
}
