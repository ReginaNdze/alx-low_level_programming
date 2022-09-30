#include "main.h"

/**
  *main - prints the name of the program
  *@argc: counts the arguments
  *@argv: lists the arguments
  *Return: Always 0 for success
  */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv;
	return (0);
}
