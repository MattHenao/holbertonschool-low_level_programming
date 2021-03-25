#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 *
 * @b: Length
 *
 * Return: *a
 */

void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);
	if (a == '\0')
		exit(98);
	return (a);
}
