#include "holberton.h"

/**
 *  rev_string - reverses a string
 *
 * @s: String
 */

void rev_string(char *s)
{
	int count, i, tmp;

	for (count = 0; s[count] != '\0'; count++)
	;
	count--;
	for (i = 0; i < count; i++, count--)
	{
		tmp = s[i];
		s[i] = s[count];
		s[count] = tmp;
	}
}
