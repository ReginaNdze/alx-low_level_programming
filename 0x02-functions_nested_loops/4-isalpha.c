#include "main.h"

/**
  *_isalpha - prints alphabets in lower case ten times
  *@c: character to be checked
  *Return: Success 0, 1 otherwise
  */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
