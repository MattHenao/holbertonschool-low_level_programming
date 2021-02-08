#include <holberton.h>

/**
 * print_alphabet - Prints alphabet in lowercase
 *
 * Return: 0 always runs
 */

void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	return (0);
}
