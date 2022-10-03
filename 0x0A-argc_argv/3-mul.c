#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints function
 * @argc: counts args for int function
 * @argv: gives value to the char funx
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, res = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			res *= atoi(arc[i]);
		}
		printf("%d\n", res);
	}
	return (0);
}
