#include "main.h"

/**
*_pow_recursion - retuns the power of an int recursively
*@x: base int
*@y: power int
*Return: int
*/

int _pow_recursion(int x, int y)
{
if (y == 0)
{
	return (1);
}
else if (y == 1)
{
	return (x);
}
else if (x == 1)
{
	return (1);
}
else if (y < 0)
{
	return (-1);
}
else
{
	return (x * _pow_recursion(x, y - 1));
}
}

