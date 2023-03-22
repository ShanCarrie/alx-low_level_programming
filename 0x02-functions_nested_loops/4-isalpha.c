#include "main.h"
/**
 * _isalpha - shpes 1 if the input is a letter
 * Otherwise shows 0
 * @c: The character in ASCii code
 * Return 1: for rletters. 0 for the rest
 */
int _isalpha(int c)
{
	if (( c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
	       	return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
