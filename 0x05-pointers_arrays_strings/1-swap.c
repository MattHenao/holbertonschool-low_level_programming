#include "holberton.h"

/**
 * swap_int - Swaps the values of two integers
 *
 * @a: First integer
 *
 * @b: Second integer
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
