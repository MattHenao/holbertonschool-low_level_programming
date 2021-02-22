#include "holberton.h"

/**
 * _memcpy - Copies memory area
 *
 * @dest: Output
 *
 * @src: String
 *
 * @n: Bytes
 *
 * Return: s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
