#include "main.h"

/**
 * _islower - checks for lowercase alphabets
 * @a : character to check
 * Return: 1 if is lowercase and 0 for otherwise
 */

int _islower(int a)
{
	if (a >= 97 && a <= 122)
	{
		return (1);
	}
	return (0);
}
