#include "holberton.h"

/**
 * array_range - Creates an array of integers
 *
 * @min: Range min
 *
 * @max: Range max
 *
 * Return: a or NULL
 */

int *array_range(int min, int max)
{
	int *a;
	int b, c;

	if (min > max)
		return ('\0');

	b = (max - min + 1);

	a = malloc(b * sizeof(*a));

	if (!a)
		return ('\0');

	for (c = 0; c < b; c++)
		a[c] = min++;
	return (a);
}
