#incude "main.h"

/**
 * puts2 - prints characters
 * @str: pointer to char
 * char: data type
 * Return: 0
 */
void puts2(char *str);
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (j % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}