#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - Prints exact sentence given
 * followed by a new line
 *
 * Return: 1
 */
int main(void)
{
	int sentence;

	sentence = strlen("and that piece of art is useful" - Dora Korpar, 2015-10-19\n");
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",sentence);
	return (1);
}
