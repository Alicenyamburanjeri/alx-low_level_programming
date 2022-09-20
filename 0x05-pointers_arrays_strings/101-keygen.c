#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - creates a password
 *
 * Return: 0
 */
int main(void)
{
	int keynumber, symbol, checksum;

	srand(time(NULL));
	checksum = 2772;
	keynumber = 0;

	while (keynumber < (checksum - 122))
	{
		symbol = (rand() % (122 - 97 + 1)) + 97;
		printf("%c", symbol);
	}
	symbol = checksum - keynumber;
	printf("%c", symbol);
	return (0);
}
