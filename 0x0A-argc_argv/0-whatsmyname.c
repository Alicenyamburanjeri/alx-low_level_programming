#include <stdio.h>

/**
 * main - Prints prog name
 * @argc: number of arguments passed to the function
 * @arv: argument vectors and pointers to string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = argc - argc;

	printf("%s\n", argv[i]);

	return (0);
}
