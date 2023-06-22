#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * prints the numbers from 1 to 100
 * For multiples of 3,print Fizz instead of 3. Multiples of 5 print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
 * Return: 0 if successful
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
	if (a % 3 == 0)
		printf("Fizz");
	else if (a % 5 == 0)
		printf("Buzz");
	else if (a % 15 == 0)
		printf("FizzBuzz");
	else
		printf("%i", a);
	if (a < 100)
		printf(" ");
	}
	printf("\n");
	return (0);
}
