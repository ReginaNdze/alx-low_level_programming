#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int:%zu byte(s)\n", sizeof(int));
	printf("Size of long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of long long: %zu byte(s)\n", sizeof(long long));
	printf("Size of float: %zu bytes(s)\n", sizeof(float));
	return (0);
}
