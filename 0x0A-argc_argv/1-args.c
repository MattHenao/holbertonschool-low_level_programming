#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the number of arguments
 *
 * @argc: Number of arguments
 *
 * @argv: Name of arguments
 *
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
