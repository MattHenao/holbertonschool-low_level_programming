#include "holberton.h"

/**
 * _strncat - Concatenates two strings
 *
 * @dest: Output
 *
 * @src: String
 *
 * @n: String
 *
 * Return: Dest
 */

char *_strncat(char *dest, char *src, int n)
{
	{
	int a;
	int i;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	dest[a + i] = src[i];
	dest[a + i] = '\0';
	return (dest);
	}
}
