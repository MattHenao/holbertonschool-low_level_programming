#include <stdio.h>

/**
 * main - print the alphabet lowercase except q and e
 *
 * Return: 0 always run
 */

int main(void)
{
	char a;

	for (a = 97; a <= 122; ++a)
	if (a == 101 || a == 113)
	{
		continue;
	}
	else
	{
		putchar(a);
	}
	putchar(10);
	return (0);
}
