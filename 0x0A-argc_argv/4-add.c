#include "main.h"

/**
  *check_digit -checks a given char if its a number or not
  *@a: input char
  *Return: Always 0 for success
  */

int check_digit(char *a)
{
	int len;
	int b;
	int num;

	b = 0;
	num  = 0;
	len = strlen(a);

	while (b < len)
	{
		if (a[b] < '0' || a[b] > '9')
	{
		return (-1);
	}
	else
		num = num * 10 + (a[b] - '0');
	b++;
	}
return (num);
}

/**
  *main - add positive numbers
  *@argc: arfument counter
  *@argv: argument vector
  *Return: int
  */

int main(int argc, char *argv[])
{
	int i;
	int num;
	int sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		num = check_digit(argv[i]);
		if (num == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}


















