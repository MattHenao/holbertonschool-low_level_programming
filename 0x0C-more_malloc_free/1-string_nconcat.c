#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: First string
 *
 * @s2: Second string
 *
 * @n: Number of chars
 *
 * Return: Point or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *point;
	unsigned int a, b, pa, pb;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
	;
	for (b = 0; s2[b] != '\0'; b++)
	;

	if (n < b)
		b = n;

	b += a;
	point = malloc(sizeof(char) * (b + 1));

	if (!point)
		return ('\0');
	b = n;
	for (pa = 0; pa < a; pa++)
		point[pa] = s1[pa];
	for (pb = 0; pb < b; pb++)
	{
		point[pa] = s2[pb];
		pa++;
	}
	point[pa] = '\0';
	return (point);
}
