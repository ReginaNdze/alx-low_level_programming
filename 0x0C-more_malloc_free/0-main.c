#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
  *main - checks the code
  *Return: Always 0
  */

int main(void)
{
	char *c;
	int *i;

	c = malloc_checked(sizeof(char) * 1024);
	printf("%p\n", (void *)c);
	i = malloc_checked(sizeof(int) * 402);
	printf("%p\n", (void *)i);
	free(c);
	free(i);
	return (0);
}
