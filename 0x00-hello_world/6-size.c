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
	
	printf("size of a char: %ld bytes(s)\n", sizeof(c));
	printf("size of an int: %ld bytes(s)\n", sizeof(i));
	printf("size of a long int: %ld bytes(s)\n", sizeof(li));
	printf("size of a long long int: %ld bytes(s)\n", sizeof(lli));
	printf("size of a float: %ld bytes(s)\n", sizeof(f));
	return (0);
}
