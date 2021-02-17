#include "holberton.h"

/**
 * _puts - Prints a string
 *
 * @str: String
 */

void _puts(char *str)
{
	int a;
	int b;

	for (a = 0; str[a] != 0; a++)
	{
		b = str[a];
		_putchar(b);
	}
	_putchar('\n');
}
