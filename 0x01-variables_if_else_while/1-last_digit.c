#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print last digit
 *
 * Return: 0 always runs
 */

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("The last digit of %d ", n);
	printf("is %d ", n);
		if (n > 5)
		{
			printf("and is greater than 5 ");
		}
		else if (n == 0)
		{
			printf("and is 0 ");
		}
		else if (n > 6 && n != 0)
		{
			printf("and is less than 6 and not 0 ");
		}
	printf("\n");
	return (0);
}
