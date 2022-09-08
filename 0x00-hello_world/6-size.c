#include <stdio.h>
/**
* main - print the stringin the put function
* Description: using the main function
* Return: 0
*/
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of a char: %d bytes(s)\n", sizeof(c));
	printf("size of an int: %d bytes(s)\n", sizeof(i));
	printf("size of a long int: %d bytes(s)\n", sizeof(li));
	printf("size of a long long int: %d bytes(s)\n", sizeof(lli));
	printf("size of a float: %d bytes(s)\n", sizeof(f));
	return (0);
}
