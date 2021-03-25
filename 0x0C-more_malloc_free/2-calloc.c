#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 *
 * @nmemb: Array
 *
 * @size: Bytes
 *
 * Return: j
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *j;
	unsigned int i;

	if (!nmemb || !size)
		return ('\0');

	j = malloc(nmemb * size);

	if (!j)
		return ('\0');

	for (i = 0; i < (nmemb * size); i++)
		j[i] = '\0';

	return (j);
}
