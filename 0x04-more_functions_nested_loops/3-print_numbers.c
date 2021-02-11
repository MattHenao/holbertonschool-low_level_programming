#include "holberton.h"

/**
 * print_numbers - Prints the numbers, from 0 to 9
 *
 * Return: 0
 */

void print_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
