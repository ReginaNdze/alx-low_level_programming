#include "main.h"

/**
  *_strlen_recursion - prints the lenght of a string ith recursion
  *@s: string to return its lenght
  *Return: int
  */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
	return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
