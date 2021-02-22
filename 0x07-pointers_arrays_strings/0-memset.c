#include "holberton.h"

/**
 * _memset -  Fills memory with a constant byte
 *
 * @s: String
 *
 * @b: Char
 *
 * @n: Bytes
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}