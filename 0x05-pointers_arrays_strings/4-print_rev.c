#include "holberton.h"

/**
 * print_rev - Prints a string, in reverse
 *
 * @s: String
 */

void print_rev(char *s)
{
	int a;
	int b;

	for (a = 0; s[a] != 0; a++)
	{
	}
	for  (a = a - 1; a >= 0; a--)
	{
		b = s[a];
		_putchar(b);
	}
	_putchar('\n');
}
