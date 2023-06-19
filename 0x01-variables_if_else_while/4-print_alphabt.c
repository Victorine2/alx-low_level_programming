#include <stdio.h>

/**
 * main - Entry point
 * main - prints the alphabet in lowercase, followed by a new line
 * all the letters except q and e
 * Return: 0 Is a success.
 */

int main(void)
{
	char i = 'a';

	while
		(i <= 'z') {
			if ((i != 'e' && i != 'q') && i <= 'z')
				putchar(i);
			i++;
	}
	putchar('\n');
	return (0);
}












}
