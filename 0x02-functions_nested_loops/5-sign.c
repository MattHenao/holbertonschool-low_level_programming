#include "holberton.h"

/**
 * print_sign - Prints the sign of a number
 *
 * @n: Check if the number is posivite, negative or zero
 *
 * Return: Returns 1, Returns -1 or Return 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
