#include "holberton.h"

/**
 * _strcat - Concatenates two strings
 *
 * @dest: First Str
 *
 * @src: Second Str
 *
 * Return: Dest
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	for (a = 0 ; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
