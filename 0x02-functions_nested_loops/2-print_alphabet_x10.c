#include "main.h"

/**
  *print_alphabet_x10 - prints alphabets in lower case ten times
  *
  *Return: Success 0, 1 otherwise
  */

void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j <= 10; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
