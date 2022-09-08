#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	printf("Size of a char: %zu byte\n", sizeof(char));
	printf("Size of an int:%zu byte\n", sizeof(int));
	printf("Size of a long: %zu byte\n", sizeof(long));
	printf("Size of long int: %zu byte\n", sizeof(long int));
	printf("Size of long long: %zu byte\n", sizeof(long long));
	return (0);
}
