#include <stdio.h>

/**
 * main - print the alphabet in uppercase and lowercase
 *
 * Return: 0 always run
 */

int main(void)
{
	char a = 97;
	char b = 122;
	char c = 65;
	char d = 90;

	for (a = 97; a <= b; a++)
	{
		putchar(a);
	}
	for (c = 65; c <= d; d++)
	{
		putchar(c)
	}
	putchar(10);
	return (0);
}
