#include <stdio.h>

/**
 * main - Prints alphabet lowercase in reverse
 *
 * Return: 0 always runs
 */

int main(void)
{
	char a;

	for (a = 122; a > 96; a--)
	{
		putchar(a);
	}
	putchar(10);
	return (0);
}
