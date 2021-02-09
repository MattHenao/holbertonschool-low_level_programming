#include "holberton.h"

/**
 * jack_bauer - Print the hour of all day
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int a = 0;
	int b = 0;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			_putchar(':');
			_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
			_putchar('\n');
		}
	}
}
