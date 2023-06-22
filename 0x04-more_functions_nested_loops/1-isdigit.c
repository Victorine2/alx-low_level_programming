#include "main.h"

/**
 * _isdigit - Checks for a digit (0 through 9)
 * @c: character to be checked
 * Return: 1 for a digit character, 0 for otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
		return (0);
}
