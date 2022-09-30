#include "main.h"

/**
  *main - prints the name of the program
  *@argc: counts the arguments
  *@argv: lists the arguments
  *Return: Always 0 for success
  */

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}
