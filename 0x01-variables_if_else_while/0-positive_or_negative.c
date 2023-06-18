#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * main - Assign random number to variable n
 * when executed with if else function, it prints a positive
 * negative or zero number
 * Return: 0 Is a success.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
