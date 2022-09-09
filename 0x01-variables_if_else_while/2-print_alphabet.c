#include <stdio.h>

/**
 * main - Prints the alphabets in lowercase,
 * and then in upper case.
 *
 * Return: Always (0).
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter('\n')); 

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter('\n'));

	return (0);
}
