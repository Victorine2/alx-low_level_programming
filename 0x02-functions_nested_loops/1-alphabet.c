#include "main.h"

/**
 * main - entry point
 * main - prints the alphabet, in lowercase, followed by a new line
 * return: 0 is a success
 */

void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);	
	}
	_putchar('\n');

}

