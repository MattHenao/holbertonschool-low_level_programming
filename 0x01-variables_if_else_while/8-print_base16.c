#include <stdio.h>

/**
 * main - Prints all numbers of base 16
 *
 * Return: 0 always runs
 */

int main(void)
{
	char a;
	char b;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	for (b = 97; b < 103; b++)
	{
		putchar(b);
	}
	putchar(10);
	return (0);
}
