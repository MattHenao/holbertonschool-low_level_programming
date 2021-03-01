#include "holberton.h"

/**
 * _strcpy - Copies the string
 *
 * @dest: Destination
 *
 * @src: String
 *
 * Return: Pointer of dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\n'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
