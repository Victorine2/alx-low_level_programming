#include <stdio.h>

/**
 * main - Entry point
 * main - prints all possible combinations of single-digit numbers.
 * Return: 0 Is a success.
 */

int main(void)
{
	int v;

	for (v = 0; v < 10; v++)
	{
		putchar(v + '0');
		if (v < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
