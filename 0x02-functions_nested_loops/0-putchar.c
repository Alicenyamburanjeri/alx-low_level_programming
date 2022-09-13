#include <main.h>

/**
 * main - Prints putchar followed by
 * a new line
 *
 * Return: 0
 */
int main(void)
{
	char c[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
		
	}
	_putchar('\n');
	return (0);
}
