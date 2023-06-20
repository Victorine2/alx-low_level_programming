include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @p: number to be printed
 * Return: value of the last digit of a number
 */

int print_last_digit(int p)
{
	int last;

	last = p % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
