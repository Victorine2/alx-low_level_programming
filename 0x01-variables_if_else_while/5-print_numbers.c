#include <stdio.h>

/**
 * main - Entry point
 * main - prints all single digit numbers of base 10 starting from 0
 * followed by a new line.
 * Return: 0 Is a success.
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	putchar('\n');
	return (0);
}
