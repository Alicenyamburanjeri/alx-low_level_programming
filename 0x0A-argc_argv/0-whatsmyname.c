#include <stdio.h>

/**
 * main - prints the name
 * @argv: arg value for char
 * main - Prints prog name
 * @argc: number of arguments passed to the fxn
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = argc - argc;

	printf("%s\n", argv[i]);

	return (0);
}
