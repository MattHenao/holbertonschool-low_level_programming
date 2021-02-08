#include "holberton.h"

/**
 * _islower - Checks for lowercase character
 *
 * @c: Check
 *
 * Return: Returns 1 if c is lowercase Returns 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
