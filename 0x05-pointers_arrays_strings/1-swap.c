#include "main.h"

/**
  *swap_int - swaps the value of two intergers
  *@a: one of the inergers to be swapped
  *@b: the other integer to be swapped
  *Return: 0
  */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
