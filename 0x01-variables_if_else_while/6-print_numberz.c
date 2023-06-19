#include <stdio.h>

/**
 * main - Entry point
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line
 *Return: 0 Is a success.
 */

int main(void)
{
	int a;

	a = 0;

	while
		(a < 10) {
	putchar(a + '0');
	a++;
	}
	putchar('\n');
	return (0);
}
