#include "holberton.h"

/**
 * print_alphabet_x10 - Print alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int a;
	int b;
	for (a = '0'; a <= '9'; a++)
	{
		for (b = 97; b <= 123; b++)
		{
			if (b == 123)
			{
				_putchar(10);
			}
			else
			{
				_putchar(b);
			}
		}
	}
}
