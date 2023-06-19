#include <stdio.h>

/**
 * main - Entry point
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: 0 Is a success.
 */

int main(void)
{
	char b;

	int c;

	b = 'a';
	c = 0;
	
	while
		(c < 10) {
			putchar(c + '0');
			c++;
		}
	while
		(b <= 'f') {
			putchar(b);
			b++;
		}
	putchar('\n');
	return (0);

}
