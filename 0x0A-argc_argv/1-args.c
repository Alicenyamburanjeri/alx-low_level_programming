#include <stdio.h>

/**
 * main - prints the number of arguments
 * passed into it.
 * @argc: counter for int arg
 * @argv: counter for value of arg to char
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", (argc - 1));

	return (0);
}

