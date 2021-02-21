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
	int dest_len = _strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
	}
}
