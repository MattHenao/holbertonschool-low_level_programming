#include <stdio.h>

/**
 * main - print the alphabet
 *
 * Return: 0 always run
 */

int main(void)
{
	char a = 97;
	char b = 122;

	for (a = 97; a <= b; a++)
	{
		putchar(a);
	}
	putchar(10);
	return (0);
}
