#include "main.h"
/**
  *_strlen - returns the value of a string
  *@s: sting to evaluate
  *Return: returns the length of a string
  */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		++i;
	}
	return (i);
}
