#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  *main - entry point
  *
  *Return: Always 0 (success)
  */
int main(void)
{
	int n, n1;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n1 = n % 10;
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n1);
	}
	else if  ((n % 10) == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n1);
	}
	else  if (((n % 10) < 6) && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n1);
	}
	return (0);
}

