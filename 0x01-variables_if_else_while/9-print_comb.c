#include <stdio.h>

/**
 * main - Print number from 0 to 9 and separate with ", "
 *
 * Return: 0 always runs
 */

int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(44);
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
