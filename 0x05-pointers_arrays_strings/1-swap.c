#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: swaps with value of integer b
 * @b: swaps with value of integer a
 * Return: 0 is a success
 */

void swap_int(int *a, int *b)
{
	int change;

	change = *b;

	*b = *a;

	*a = change;
}
