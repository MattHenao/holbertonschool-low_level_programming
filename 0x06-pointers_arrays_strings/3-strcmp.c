#include "holberton.h"

/**
 * _strcmp - Compares two strings
 *
 * @s1: First string
 *
 * @s2: Second string
 *
 * Return: Number ASCII
 */

int _strcmp(char *s1, char *s2)
{
	if (s1[0] != s2[0])
		return (s1[0] - s2[0]);
	else
		return (0);
}
