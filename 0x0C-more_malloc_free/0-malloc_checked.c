#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
  *malloc_checked - allocates memory
  *@b: size of each memory
  *Return: Always 0
  */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}

