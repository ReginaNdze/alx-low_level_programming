#include "main.h"
#include <stdio.h>
/**
  * _abs - computes the absolute value of an integer
  *@n: int to be checked
  *Return: absolute value of int
  */

int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}
