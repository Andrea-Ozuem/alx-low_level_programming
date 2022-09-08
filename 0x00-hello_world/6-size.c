#include <stdio.h>

/**
 *main - entry point
 */
int main(void)
{
	printf("Size of a char: %lu bytes(s)\n", sizeof(char));
	printf("Size of an int: %lu bytes(s)\n", sizeof(int));
	printf("Size of a long: %lu bytes(s)\n", sizeof(long));
	printf("Size of a long long int: %lu bytes(s)\n", sizeof(long long int));
	printf("Size of an float: %lu bytes(s)\n", sizeof(float));
	return (0);
}