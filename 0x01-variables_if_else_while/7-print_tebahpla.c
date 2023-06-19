#include <stdio.h>

/**
 * main - Entry point
 * main - prints the lowercase alphabet in reverse, followed by a new line
 * Return: 0 Is a success.
 */

int main(void)
{
	char n;

	n = 'z';

	while
		(n >= 'a') {
			putchar(n);
			n--;
		}
	putchar('\n');
	return (0);
}
