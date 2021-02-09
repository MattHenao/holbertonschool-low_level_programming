#include "holberton.h"

/**
 * print_last_digit - Print last digit of a number
 *
 * @a; Check the number
 *
 * Return: 0
 */

int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (b < 0)
	{
		b = -b;
	}
	_putchar(b + 48);
	return (b);

}
