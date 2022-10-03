#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
  *create_array - creates an array of a given size
  *@size: array size
  *@c: initial value
  *
  *Return: pointer to allocate space
  */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int counter;

	array = malloc(sizeof(char) * size);
	if (array == NULL || size == 0)
		return (NULL);
	for (counter = 0; counter  < size; counter++)
		array[counter] = c;
	return (array);
}
