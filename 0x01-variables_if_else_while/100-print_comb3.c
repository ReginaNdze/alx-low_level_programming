#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  *main - entry point
  *
  *Return: Always 0 (success)
  */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

