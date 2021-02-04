#include <stdio.h>

/**
 * main - Print numbers from 0 to 9 without a char variable
 *
 * Return: 0 always runs
 */

int main(void)
{
	int a;

	for (a = '0'; a < '10'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
