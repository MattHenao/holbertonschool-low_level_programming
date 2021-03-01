#include "holberton.h"

/**
 * print_square - Prints a square
 *
 * @size: Size of the square
 */

void print_square(int size)
{
	int a = 35;
	int b;
	int c;

	if (size > 0)
	{
		for (b = 0; b < size; b++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar(a);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
