#include "main.h"

/**
  *main - prints the name of the program
  *@argc: counts the arguments
  *@argv: lists the arguments
  *Return: Always 0 for success
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
