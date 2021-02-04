#include <stdio.h>

/**
 * main - Print numbers from 0 to 9 without a char variable
 *
 * Return: 0 always runs
 */

int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	putchar(10);
	return (0);
}
