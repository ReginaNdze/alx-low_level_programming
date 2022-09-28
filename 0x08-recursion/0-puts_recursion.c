#include "main.h"

/**
  *_puts_recursion - Function to print a string, followed by a new line
  *@s: string to be printed
  *return: always 0
  */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	if ((s[0] <= 122 && s[0] >= 97) ||
	(s[0] <= 90 && s[0] >= 65) ||
	(s[0] <= 53 && s[0] >= 32))
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
