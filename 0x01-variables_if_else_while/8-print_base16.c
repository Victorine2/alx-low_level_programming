#include <stdio.h>

/**
 * main - Entry point
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: 0 Is a success.
 */

int main(void)
{
	int a;

	char b;

	a = '0';
	b = 'a';

	while
		(a < 10) {
			putchar(a + '0');
			a++;
		}
	while
		(b <= 'f') {
			putchar(b);
			b++;
		}
	putchar('\n');
	return (0);

}
