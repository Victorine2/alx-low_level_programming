#include "main.h"

/**
 * _puts -  prints a string, followed by a new line, to stdout.
 * @str: pointer to the string
 * Return: string and new line.
 */

void _puts(char *str)
{
	int c = 0;

	while (str[0])
	{
	_putchar(str[0]);
	c++;
	}
	_putchar('\n');
}
