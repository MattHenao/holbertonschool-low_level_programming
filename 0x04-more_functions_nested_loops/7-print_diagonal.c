#include "holberton.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 *
 * @n: Number of times the character
 */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 0; b < n; b++)
		{
			for (a = 0; a < b; a++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar(10);
		}
	}
}
