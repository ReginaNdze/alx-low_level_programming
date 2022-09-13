#include "main.h"

/**
  *print_alphabet - Prints the alaphabet followed by a new line
  *
  *Retuns: 0 for success, 1 for failure
  *
  */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
_putchar('\n');
}




